/*Người dùng nhập 2 số m và n là số dòng và số cột của một ma trận A (m x n). 
Người dùng tiếp tục nhập các phần tử của ma trận A. 
Chương trình xuất ma trận A ra màn hình theo đúng định dạng m dòng và n cột.
*/

#include <bits/stdc++.h>
using namespace std;
#define max 100

void nhapmang(float a[][100], int &col, int &row){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin >> a[i][j];
        }
    }
}

void xuatmang(float a[][100], int col, int row){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int column, row;
    cin >> row;
    cin >> column;
    float a[max][max];
    nhapmang(a,column,row);
    xuatmang(a,column,row);
    system("pause");
    return 0;
}