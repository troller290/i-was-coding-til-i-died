/* Nhập 2 ma trận A (m x n) và B (m x n). Tính tổng A + B của 2 ma trận A và B. 
Input
2 số nguyên m, n là số dòng, số cột của ma trận A.
mxn số thực (float) là giá trị các phần tử của ma trận A.
2 số nguyên l, k (với l = m, k = n) là số dòng, số cột của ma trận B.
lxk số thực (float) là giá trị các phần tử của ma trận B.
*/
#include <bits/stdc++.h>
using namespace std;
#define max 100

void nhapmang(float a[][max], int n, int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }
}

void Tong2mang(float a[][max], float b[][max], float c[][max], int n, int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}

void xuatmang(float a[][max], int n, int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    float a[max][max], b[max][max], c[max][max];
    int n, m, l , k;
    cin >> n;
    cin >> m;
    nhapmang(a,n,m);
    cin >> l; //l=n
    cin >> k; //k=m
    nhapmang(b,l,k);
    Tong2mang(a,b,c,n,m);
    xuatmang(c,n,m);
    system("pause");
    return 0;
}