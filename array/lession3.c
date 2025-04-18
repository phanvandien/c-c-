// mang doi xung : nhap mot day so nguyen co n phan tu (n khong qua 100, cac phan tu trong day khong qua 10^9) hay viet chuong trinh kiem tra xem day co phai doi xung hay khong . neu dung in ra yes, sai no
// input : so boi test
// input 2: so phan tu trong booi test

#include "stdio.h"
#include "math.h"

int dx(int a[], int n)
{
    int l=0, r=n-1;
    while(l <= r){
        if(a[l] != a[r]){
            return 0;
        }
        ++l ;
        --r ;
    }
    return 1;
}

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
        if(dx(a, n)){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}
