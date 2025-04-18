// viet chuong trinh in ra cac so nguyen to 
// input 1 : ghi so boi test
// input 2 : ghi so N phan tu trong day

#include "stdio.h"
#include "math.h"

int nt(int n){
    if(n <2){
        return 0;
    }
    for(int i=2;i<=sqrt(n); i++){
        if(n %i ==0){
            return 0;
        }
    }
    return 1;
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int a[n];
        for(int i=0;i<n;i++){
            scanf("%d", &a[i]);
        }
        for(int i =0;i<n;i++){
            if(nt(a[i])){
                printf("%d", a[i]);
            }
        }
        printf("\n");
    }
    return 0;
}