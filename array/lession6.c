// viet chuong trinh nhap vao mang A gom n phan tu (1<n<100) Thuc hien dao nguoc mang va in ra ket qua 
// input1: so phan tu mang A
// Input2 : so pgan tu mang B cac phan tu khong vuowt qua 1000
// output ghi ra ket qua tren mot dong
#include "stdio.h"
#include "math.h"

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n;i++){
        scanf("%d", &a[i]);
    }
    // for(int i = n-1;i>=0;i--){
    //     printf("%d", a[i]);
    // }
    int l=0, r = n-1;
    while(l <= r){
        int tmp = a[l];
        a[l] = a[r];
        a[r] = tmp;
        ++l; --r;
    }
    for(int i=0;i<n;i++){
        printf("%d", a[i]);
    }
    
    return 0;
}