//viet chuong trinh phan tich mot so nguyen thanh cac thua so nguyen to
#include "stdio.h"
#include "math.h"
#include "string.h"

void pt(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i ==0){
            while(n%i ==0){
                printf("%d ",i);
                n /= i;
            }
        }
    }
    if(n >1)
    {
        printf("%d ",n);
    }
}
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d ", &n);
        pt(n);
    }
    return 0;
}