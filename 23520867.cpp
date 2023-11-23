//Cộng, trừ 2 số nguyên lớn (số vượt quá giới hạn của các kiểu dữ liệu)

#include <iostream>
#include <stdlib.h>
#include <cstring>
#include <conio.h>

using namespace std;

int n1=0, n2=0;

void Nhapsonguyenlon(int A[], int B[]){
    
    cout <<"Nhap bignumber1: ";
     char ch1;
    
     do{
        ch1 = getchar();
        if (ch1 >= '0' && ch1 <= '9'){
            A[n1] = ch1 - '0';
            n1++;
        }
     }while(ch1 != '\n');

     cout <<"Nhap bignumber2: ";
     char ch2;

     do{
        ch2 = getchar();
        if (ch2 >= '0' && ch2 <= '9'){
            B[n2] = ch2 - '0';
            n2++;
        }
     }while(ch2 != '\n');
}

void reverse(int a[], int n){
    int l=0, r=n-1;
    while(l<r){
        int temp=a[l];
        a[l] = a[r];
        a[r] = temp;
        ++l; --r;
    }
}

//Quy định số A có nhiều chữ số hơn số B
void Add(int A[], int B[]){
    int n=0;
    int amt1, amt2;
    if(n1>=n2){
        amt1 = n1;
        amt2 = n2;
    }else{
        amt1 = n2;
        amt2 = n1;
    }
    int x[amt1], y[amt1], z[amt1+1];
    for(int i=0; i<amt1; i++){
        x[i] = A[i];
    }
    for(int i=0; i<amt2; i++){
        y[i] = B[i];
    }
    reverse(x,amt1); reverse(y,amt2);
    for(int i=amt2; i<amt1; i++){
        y[i] = 0;
    }
    int nho = 0, kq;
    for(int i=0; i<amt1; i++){
        kq = x[i] + y[i] + nho;
        z[n++] = kq%10;
        nho =kq/10;
    }
    if(nho){
        z[n++] = nho;
    }
    cout << "Tong 2 so nguyen lon la: ";
    for(int i=n-1; i>=0; i--){
        cout << z[i];
    }
}
//Quy định số A lớn hơn số B
void Subtract(int A[], int B[]){
    int n=0;
    int amt1, amt2;
    if(n1>=n2){
        amt1 = n1;
        amt2 = n2;
    }else{
        amt1 = n2;
        amt2 = n1;
    }
    int x[amt1], y[amt1], z[amt1];
    for(int i=0; i<amt1; i++){
        x[i] = A[i];
    }
    for(int i=0; i<amt2; i++){
        y[i] = B[i];
    }
    reverse(x,amt1); reverse(y,amt2);
    for(int i=amt2; i<amt1; i++){
        y[i] = 0;
    }
    int nho = 0, kq;
    for(int i=0; i<amt1; i++){
        kq = x[i] - y[i] - nho;
        if(kq<0){
            nho = 1;
            z[n++] = kq + 10;
        }else{
            z[n++] = kq;
            nho = 0;
        }
    }
    int ktra = 0;
    cout << "Hieu 2 so nguyen lon la: ";
    for (int i=n-1; i>=0; i--){
        if(ktra == 0 && z[i]){
            ktra = 1;
        }
        if(ktra){
            cout << z[i];
        }
    }
    if(ktra==0){
        cout << "0";
    }
}

int kiemtra(int A[], int B[]){
    if(A[0] > B[0]){
        return 1;
    }
    if(A[0] < B[0]){
        return 2;
    }
}

int main(){
    

    int A[1000], B[1000];
    Nhapsonguyenlon(A,B);
  
    if(n1 <= n2){
        Add(B,A);
    }else Add(A,B);

    cout << "\n";

    if(n1>n2 || n1==n2 && kiemtra(A,B)==1){
        Subtract(A,B);
    }
    if(n1<n2 || n1==n2 && kiemtra(A,B)==2){
        Subtract(B,A);
    }
}    