// viet chuong trinh tim so lon nhat trong mot day so cho truoc
// input 1: ghi so boi test
// input 2 : ghi so N phân tu cac so trong day deu la so nguyen duong và khong qua 1000
// output1 la gia tri so lon nhat
// output2 la cac vi tri trong day co gia tri lon nhat 
#include "stdio.h"
#include "math.h"

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n; scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++){
            scanf("%d", &a[i]);
        }
        int max = -1e9;
        for(int i=0;i<n;i++){
            if(a[i] > max){
                max = a[i];
            }
        }
        printf("%d\n", max);
        for(int i=0;i<n;i++){
            if(a[i] == max){
                printf("%d",i);
            }
        }
        printf("\n");
    }
    return 0;
}

