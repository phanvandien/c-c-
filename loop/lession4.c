// viet chuong trinh kiem tra mot so nguyen duong bat ky (2 chu so tro len, khong qua 9 chu so) co chu so bat dau va ket thuc nhau hay khong
#include "stdio.h"
#include "math.h"
#include "string.h"

int check(int n){
    int donvi = n%10;
    while(n >=10){
        n/=10;
    }
    if(donvi == n)
    {
       return 1;  
    }
    else return 0;
}

int check2(char a[]){
    if(a[0] == a[strlen(a) -1]){
        return 1;
    }
    else return 0;
}


int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        // int n;
        // scanf("%d",&n);
        char a[100];
        scanf("%s",a);
       if(check2(a) == 1){
        printf("yes\n");
       }
       else{
        printf("no\n");
       }
    }
    return 0;
    
}





