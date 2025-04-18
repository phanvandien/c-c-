// kiem tra so nguyen to (0<=n<=10 mu 9) so chia het cho 1 va chinh no
#include "stdio.h"
#include "math.h"

// int prime(int n)
// {
//     int cnt =0;
//     for(int i=1;i<=n;i++){ // xet den can ban 2 cua n
//         if(n%i==0) ++cnt;

//     }
//     if(cnt ==2)
//         return 1;
//     else return 0;
// }

// cach 2 
int prime2(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)
            return 0;
    }
    return n>1;
}
int main(){
    int n;
    scanf("%d",&n);
    if(prime2(n)) printf("yes");
    else printf("no"); 
}