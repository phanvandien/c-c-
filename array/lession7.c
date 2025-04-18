// viet chuong trinh nhap vao mang A mot chieu n phan tu(1<n<100) va mang B mot chieu m phan tu (1<m<100). Thuc hien chen mang B vao mang A tai vi tri P va in ra mang ket qua
// intput 1: so phan tu mang A va mang B
// input2 : cac phan tu mang A
// input 3 cac phan tu mang B
// input 4 : dong thu 4 la vi mtri chen
#include "stdio.h"
#include "math.h"

int main(){
    int n,m;
    scanf("%d%d", &n,&m);
    int a[n], b[m], c[n+m];
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    for(int i=0;i<m;i++){
        scanf("%d", &b[i]);
    }
    int p; scanf("%d", &p);
    int idx =0;
    for(int i=0;i<p;i++){
        c[idx] = a[i];
        ++idx;
    }
    for(int i=0;i<m;i++){
        c[idx] = b[i];
        ++idx;
    }
    for(int i=p; i<n;i++){
        c[idx] = a[i];
        ++idx;
    }
    for(int i=0;i<idx;i++){
       printf("%d", c[i]);
    }
    return 0;
}