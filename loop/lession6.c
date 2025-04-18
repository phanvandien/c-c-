//viet chuong trinh tinh uoc so chhung lon nhat cua 2 so nguyen duong (ko qua 6 chu so)
#include "stdio.h"
#include "math.h"
#include "string.h"

// ham tim ucnl
int ucln(int a, int b){
    while(b!=0){
        int r = a%b;
        a=b;
        b=r;
    }
    return a;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
      int a,b;
      scanf("%d%d",&a,&b);
      printf("%d\n", ucln(a,b));
    }
}
