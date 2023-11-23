//Nhập ma trận A(mxn) . tìm ma trận chuyển vị
#include <bits/stdc++.h>
using namespace std;

void nhapmang(double a[][100], int col, int row){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin >> a[i][j];
        }
    }
}

void chuyenvi(double a[][100], int col, int row){
    for(int i=0 ; i<col; i++){
        for(int j=0; j<row; j++){
            cout << a[j][i] << " ";
        }
        cout << endl;
    }
}

int main(){
    double a[100][100];
    int col, row;
    cin >> row;
    cin >> col;
    nhapmang(a,col,row);
    chuyenvi(a,col,row);
    system("pause");
    return 0;
}
