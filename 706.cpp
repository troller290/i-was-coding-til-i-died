// Nhập ma trận vuông A (n x n). Kiểm tra A có phải là ma trận đường chéo hay không?
#include <bits/stdc++.h>
using namespace std;
#define max 100

void nhapmang(double a[][max], int n, int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }
}

int MTDuongCheo(double a[][max], int n, int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(i==j) continue;
            if(a[i][j] != 0) return 0;
        }
    }
    return 1;

}

int main(){
    double a[max][max];
    int n, m;  // n = m
    cin >> n;
    cin >> m;
    nhapmang(a,n,m);
    if(MTDuongCheo(a,n,m)==1) cout << "Yes";
    else cout << "No";
    system("pause");
    return 0;
}