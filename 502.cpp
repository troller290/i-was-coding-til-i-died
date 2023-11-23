/* tính sin(x)
x tính theo đơn vị radian
*/
#include <iostream>
#include <iomanip>
using namespace std;

double check(float x, int a)
{
	double s1 = 1, s2 = 1;
	for (int i = 1; i <= a; i++)
	{
		s1 = 1.0 * s1 * x;
		s2 = s2 * i;
	}
	return 1.0 * s1 / s2;
}
int main()
{
	double x = 0;

	cin>>x;
	int i = 1;
	double s = 0;
	while (true)
	{
		if (check(x, i) < 0.00001) break;
		s = s + check(x, i);
		i = i + 2;
		s = s - check(x, i);
		i = i + 2;
	}
	cout  << fixed << setprecision(4) << s << endl;
	system("pause");
	return 0;
}