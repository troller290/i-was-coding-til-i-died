/*Nếu một dãy 10 số tồn tại 3 số có chữ số bắt đầu là chữ số 1 
và 1 số bắt đầu bằng chữ số 4 thì có thể giả định rằng dãy số đó tuân thủ theo luật Benford.
 Hãy viết chương trình kiểm tra dãy số nhập vào có thỏa luật Benford không? */


#include <iostream>
using namespace std;
#define MAX 100

void Nhapmang(int a[], int n){
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
}

bool isBenford(int a[], int n){
    int so1=0, so4=0;
    for(int i=0; i<n; i++){
        int temp = a[i];
        while(temp >= 10){
            temp = temp/10;
        }
        if (temp==1) so1++;
        if (temp==4) so4++;
    }
    if(so1==3 && so4==1) return true;
    return false;
}




int main()
{
	int a[MAX], n = 10;
	Nhapmang(a, n);
	if (isBenford(a, n) == true)
		cout << "TRUE" << endl;
	else
		cout << "FALSE" << endl;
    system("pause");
	return 0;
}
