/*Cho ma trận vuông gồm n dòng và n cột lưu trữ các số nguyên (0 < n ≤ 100).
 Kiểm tra ma trận trên có phải là ma trận đơn vị không?
*/
#include <bits/stdc++.h>
using namespace std;
#define MAXR 100
#define MAXC 100

void NhapMaTran(int a[][MAXC], int &n){
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
           cin >> a[i][j];
        }
    }
}

bool isMaTranDonVi(int a[][MAXC], int n){
    for(int i=0; i<n; i++){
        if(a[i][i] != 1) return false;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i!=j){
            if(a[i][j] != 0) return false;
        }
        }
    }
    return true;
}


int main() {
    int a[MAXR][MAXC], n;
    NhapMaTran(a, n);
    std::cout <<  std::boolalpha << isMaTranDonVi(a, n);
    system("pause");
    return 0;
}
