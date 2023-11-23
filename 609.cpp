/* Nhập mảng nguyên dương a[n] và 2 số nguyên dương 0=<p<=n-1, k<=n-p.
Hãy hủy k phần tử trong mảng A bắt đầu từ chỉ số p.
Chỉ số mảng bắt đầu từ 0.*/


#include <iostream>

using namespace std;

void nhapmang(int A[], int n){
    for(int i=0; i<n; i++){
        cin >> A[i];
    }
}

void xoaphantu(int A[], int &n, int p, int k){
    for(int i=1; i<=k; i++){
    for(int j=p; j<n-1; j++){
        A[j] = A[j+1];
    }
    n--;
    }
}

void xuatmang(int A[], int n){
    for(int i=0; i<n; i++){
        cout << A[i] << " ";
    }
}

int main(){
    int A[100], n, p, k;
    do{
        cin >> n;
    }while(n<=0);

    nhapmang(A,n);
    cin >> p;
    cin >> k;
    
    xoaphantu(A,n,p,k);
    
    xuatmang(A,n);
    system("pause");
    return 0;
}