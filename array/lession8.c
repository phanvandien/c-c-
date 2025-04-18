//nhap 2 mang(a,N) va (b,M) va so nguyen p (0<=p<M<=N<100) Hay chen mang b vao vi tri p cua mang a
// input1 : dòng dau ghi so boi test, moi bo test gom 3 dong , dong hai ghi 3 so N,M,p dong thu 2 ghi N so cua mang a M so phan tu cua b, p vi tri chen,
// output : ghi ra thu tu bo test ,roi xuong dong va day so ket qua sau khi chen
#include "stdio.h"
#include "math.h"

int main(){
    int t; scanf("%d", &t);
    for(int i=1;i<=t;i++){
        int n, m, p ; scanf("%d%d%d", &n, &m, &p);
        int a[n], b[m];
        for(int i=0;i<n;i++){
            scanf("%d", &a[i]);
        }
        for(int i=0;i<m;i++){
            scanf("%d", &b[i]);
        }
        printf("Test %d:\n",i);
        for(int i=0;i<p;i++){
            printf("%d", a[i]);
        }
        for(int i=0;i<m;i++){
            printf("%d", b[i]);
        }
        for(int i=p;i<n;i++){
            printf("%d", a[i]);
        }
        printf("\n");
    }
    return 0;
}