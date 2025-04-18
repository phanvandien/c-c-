// sang so nguyen to vi du n =4 co 2 nguyen to 2 va 3
//thuat toan Eratosthenes

#include <stdio.h>
#include "math.h"

// int nt(int n){
//     for(int i=2;i<=sqrt(n);i++){
//         if(n%i==0)
//         return 0;
//     }
//     return n>1;
// }
// neu ban muon sang nguyen to khong vuot qua n tao mang khong vuot qua n phan tu
// phai tao duoc 1 mang co kich thuoc la n+1 phan tu 
int prime[1000001];

void sieve(){
    // coi tat ca cac so tu 0 cho toi n la so nguyen to
    // prime[i] =1
    // prime[i] =0
    for(int i=0;i<=1000000;i++)
        prime[i] =1;
    //loai 0 va 1
    prime[0] = prime[1] =0;
    for(int i=2;i<=1000;i++){
        // neu i la so nguyen to
        if(prime[i]){
            //duyet tat ca cac boi so cua i va cho no khong la so nguyen to
            for(int j=i*i;j<=1000000;j+=i){
                prime[j] =0;// j khong con la so nguyen to nua
            }
        }
    }
}

int main(){
    // int n;
    // scanf("%d",&n);
    // for(int i=0;i<=n;i++)
    // {
    //     if(nt(i))
    //     printf("%d \n",i);
    // }
    sieve();
    int n;
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        if(prime[i])
        printf("%d \n",i);
    }
}


