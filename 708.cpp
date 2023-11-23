/* Nhập ma trận vuông A (n x n). Kiểm tra A có phải là ma trận Frobenius hay không.
    Ma trận Frobenius được định nghĩa là ma trận vuông thoả các tính chất sau:
        1. Tất cả các phần tử trên đường chéo chính bằng 1.
        2. Có tối đa một cột mà các phần tử dưới đường chéo chính có thể nhận giá trị bất kì.
        3. Ngoài ra, tất cả các phần tử khác có giá trị bằng 0. */
#include <bits/stdc++.h>
using namespace std;
#define max 100

void NhapMang(double a[][max], int n, int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }
}

bool kiemtra(double a[][max], int n, int m){
    int count=0;
    // kiểm tra đường chéo chính có phải số 1 không
    for(int i=0; i<n; i++){
        if(a[i][i] != 1) return false;
    }
    // kiểm tra phía trên đường chéo chính có khác 0 chưa
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(i!=j){
                if(i<j){
                    if(a[i][j] != 0) return false;
                }
            }
        }
    }
    // kiểm tra dưới đường chéo chính có bao nhiêu cột có số tuỳ ý
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(i!=j){
                if(j>i){
                    if(a[j][i] != 0){
                        count++;
                        break;
                    }
                }
            }
        }
    }
    // nếu nhiều hơn 1 cột thì trả về false
    if(count > 1) return false;
    return true;
}

int main(){
    double a[max][max];
    int n, m;
    cin >> n; 
    cin >> m; // n = m
    NhapMang(a,n,m);
    if(kiemtra(a,n,m)) cout << "Yes" << endl;
    else cout << "No" << endl;
    system("pause");
    return 0;
}