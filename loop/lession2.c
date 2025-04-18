//viet chuong trinh nhap vao so n khong qua  10 ^ 9 , thuc hien tim tong cac chu sio n va in ra man hinh
#include "stdio.h"
#include "math.h"

int main(){
    int n;
    scanf("%d", &n);
    int tong =0;
    while(n !=0){
        tong += n%10;
        n /= 10;
    }
    printf("%d", tong);
    return 0;
}