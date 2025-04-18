//viet chuong trinh kiem tra mot so co phai la so nguyen to hay khong
#include "stdio.h"
#include "string.h"
#include "math.h"

int nt(int n){
    if(n<2)
        return 0;
    for(int i =2;i<=sqrt(n);i++){
        if(n% i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        if(nt(n)){
            printf("yes \n");
        }
        else {
            printf("no \n");

        }
    }
}