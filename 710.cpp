/* Nhập 2 ma trận A (m x n) và B (m x n). Tính tích A x B của 2 ma trận A và B. 
Input
2 số nguyên m, n là số dòng, số cột của ma trận A.
mxn số thực (float) là giá trị các phần tử của ma trận A.
2 số nguyên l, k (với l = m) là số dòng, số cột của ma trận B.
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

void Tich2mang(float a[][max], float b[][max], float c[][max], int n, int m, int k){
    float sum=0;
    int g=0; // số cột của ma trận A, dòng của ma trận B
    for(int i=0; i<n; i++){
        for(int j=0; j<k; j++){
            while(g<m){
                sum = sum + a[i][g]*b[g][j];
                g++;
            }
            c[i][j] = sum;
            sum=0;
            g=0;
        }
    }
}


void xuatmang(float a[][max], int n, int k){
    for(int i=0; i<n; i++){
        for(int j=0; j<k; j++){
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
    cin >> l; // l=m
    cin >> k; 
    nhapmang(b,l,k);
    Tich2mang(a,b,c,n,m,k);
    xuatmang(c,n,k);
    system("pause");
    return 0;
}