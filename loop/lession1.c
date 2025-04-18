// cho so nguyen duong N (khong qua 9). In ra lan luot ket qua phep nhan cua N voi cac so tu 1 den 10 , moi gia tri cach nhau mot khoang trong
#include "stdio.h"
#include "math.h"

int main(){
    int n;
    scanf("%d", &n);
    for(int i=1;i<=10;i++){
        printf("%d ", n*i);
    }
    return 0;
}