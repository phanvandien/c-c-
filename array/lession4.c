// day so fibonacci duoc dinh nghia nhu sau :
// F1 =1 , F2 =1, Fn= F(n-1) + F(n-2) voi n >2
// input1 ghi so boi test, input2 ghi so N phan tu trong boi test
#include "stdio.h"
#include "math.h"

int main(){
    long long F[100];
    F[1] =1; F[2]=1;
    for(int i=3;i<=92;i++){
        F[i] = F[i-1] + F[i-2];
        //printf("%d %lld\n", i, F[i]);
    }
    int t;
    scanf("%d", &t);
    while(t--){
        int n; scanf("%d",&n);
        printf("%lld\n",F[n]);
    }
    return 0;
}