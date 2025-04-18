// cho so nguyen duong N . Thuc hien tim tich cua cac chu so va in ra man hinh
// Input: chi co mot dong ghi so nguyen duong N 

#include "stdio.h"
#include "math.h"
#include "string.h"

int main(){
    int n;
    scanf("%d",&n);
    int tich=1;
    while(n != 0){
        tich *= n%10;
        n /= 10;

    }
    printf("%d", tich);
    return 0;
}




