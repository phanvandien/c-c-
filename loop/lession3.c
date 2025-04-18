// hay viet chuong trinh tinh tong cac chu so cua mot so nguyen bat ky
#include "stdio.h"
#include "math.h"

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d",&n);
        int tong =0;
        while(n !=0){
            tong += n%10;
            n /= 10;
        }
        printf("%d \n", tong);
    }
    return 0;
    
}