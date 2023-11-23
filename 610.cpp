/*Giả sử có 2 mảng a và b đã được sắp xếp theo thứ tự tăng dần.
Hãy nối 2 mảng a và b thành mảng c sao cho mảng c vẫn đảm bảo thứ tự tăng dần (không sử dụng thuật toán sắp xếp trên mảng c)*/
#include <bits/stdc++.h>
using namespace std;
#define max 100

void Nhapmang(int a[], int n){
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
}

void noimang(int a[], int b[], int c[], int n, int p){
    for(int i=0; i<n; i++){
        c[i] = a[i];
    }
    for(int i=n; i<n+p; i++){
        c[i] = b[i-n];
    }
}
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void sapxep(int c[], int n, int p){
    for(int i=0; i<n+p; i++){
        for(int j=i+1; j<n+p; j++){
            if(c[i] > c[j]){
                swap(c[i], c[j]);
            }
        }
    }
}

void xuatmang(int A[], int n, int p){
    for(int i=0; i<n+p; i++){
        cout << A[i] << " ";
    }
}



int main(){
    int a[max], b[max], c[200], n, p;
    cin >> n;
    Nhapmang(a,n);
    cin >> p;
    Nhapmang(b,p);
    noimang(a,b,c,n,p);
    sapxep(c,n,p);
    xuatmang(c,n,p);
    system("pause");
    return 0;
}