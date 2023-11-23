// Nhập ma trận vuông A (n x n). Tính vết (trace) của A (Vết của ma trận là tổng giá trị các phần tử trên đường chéo chính)

#include <bits/stdc++.h>
using namespace std;

void nhapmang(double a[][100], int col, int row){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin >> a[i][j];
        }
    }
}

double TRACE(double a[][100], int col, int row){
    double sum = 0;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(j==i){
                sum = sum + a[i][j];
            }
        }
    }
    return sum;
}

int main(){
    double a[100][100];
    int col, row;
    cin >> row;
    cin >> col;
    nhapmang(a,col,row);
    cout << TRACE(a,col,row);
    system("pause");
    return 0;
}
