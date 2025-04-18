// tinh tong trong doan luu y a co the lon hon b
#include "stdio.h"
#include "math.h"
#include "stdio.h"

int main(){
    int a,b;
    scanf("%d%d", &a, &b);
    if(a > b){
        int r =a, a=b, b =r;
    }
    long long tong = 1ll * (a+b) * (b-a+1) /2;
    // long long tong =0;
    // for(int i=a;i<=b;i++){
    // tong += i;
    //}
    printf("%lld", tong);
    return 0;
}