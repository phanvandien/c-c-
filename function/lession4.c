//sang so nguyen to de check nhieu test case
#include <stdio.h>
#include "math.h"
int prime[1000001];

void sieve(){
    for(int i=0;i<=1000000;i++)
        prime[i] =1;
    prime[0] = prime[1] =0;
    for(int i=2;i<=1000;i++){
        if(prime[i]){
            for(int j=i*i;j<=1000000;j+=i){
                prime[j] =0;
            }
        }
    }
}

int main(){
    sieve();
    int n;
    scanf("%d",&n);
    while(n--){
        int t;
        scanf("%d",&t);
        if(prime[t])
             printf("yes \n");
        else 
            printf("no \n");
    }
}