// viet chuong trinh so chan trong day 
// input: dong dau ghi boi test dong 2 ghi so luong phan tu , dong 3 ghi so trong day deu nguyen duong 
// dung phuong phap   

#include "stdio.h"
#include "math.h"

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
            if(a[i] % 2 ==0){
                printf("%d", a[i]);
            }
        }
        printf("\n");
    }
    return 0;
}




