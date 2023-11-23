/*Viết chương trình nhập vào số nguyên n sao cho 2 ≤ n ≤ 16. 
Tạo ma trận vuông với số dòng = số cột = n sao cho phần tử ở dòng i, cột j là số Fibonacci thứ i+j+1.
*/

#include <iostream>
using namespace std;
#define MAX 16

int fibonacci(int n) {
    if (n < 0) {
        return -1;
    } else if (n == 1 || n == 2) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

void Nhapmang(int a[][MAX], int &n){
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int tmp = fibonacci(i+j+1);
            a[i][j] = tmp;
        }
    }
}
void Xuatmang(int a[][MAX], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}


int main()
{
    int n, a[MAX][MAX];
	Nhapmang(a,n);
	Xuatmang(a,n);
	system("pause");
    return 0;
}