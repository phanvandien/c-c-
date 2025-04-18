// tach chan le . Viet chuong trinh nhap vao mang A gom n phan tu (1<n<100) . Cac gia tri trong day khong qua 1000.
// thuc hien tach mang da cho thanh mang cac so chan va mang cac so le
// input dong thu nhat la so phan tu cua mang A 
// input 2 cac phan tu mang A khong vuot qiua 1000
//output1 : mang cac so chan
//output 2: mang cac so le
#include "math.h"
#include "stdio.h"

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    // for(int i=0;i<n;i++){
    //     if(a[i] % 2 ==0){
    //         printf("%d", a[i]);
    //     }
    // }
    // printf("\n");
    // for(int i=0;i<n;i++){
    //     if(a[i] %2 ==1){
    //         printf("%d", a[i]);
    //     }
    // }
    // printf("\n");
    int chan[n], le[n], cnt1 =0, cnt2 =0;
    for(int i=0; i<n;i++){
        if(a[i] %2 ==0){
            chan[cnt1] = a[i];
            ++cnt1;
        }else{
            le[cnt2] = a[i];
            ++cnt2;
        }
    }
    for(int i=0;i<cnt1;i++){
        printf("%d", chan[i]);
    }
    printf("\n");
    for(int i=0;i<cnt2;i++){
        printf("%d", le[i]);
    }
    return 0;
}