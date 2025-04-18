//nhap vao 2 so tu nhien m va n, sao cho m<n va ca hai so deu khong qua 9 chu so . Hay liet ke cac so chinh phuong trong doan [m,n];
#include <stdio.h>
#include "math.h"
#include "string.h"

// int cp(int n){
//     int can =sqrt(n);
//     if(can * can ==n){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
int main(){

    int n, m;
    scanf("%d%d ", &n, &m );
    int c1= sqrt(n) , c2 = sqrt(m);
    if(c1 * c1 < n) ++c1;
    printf("%d\n", c2-c1 +1);
    for(int i=c1;i<=c2;i++){
        printf("%d\n",i*i);
    }
    // for(int i=n;i<=m;i++){
    //     if(cp(i)){
    //         printf("%d", i);
    //     }
    // }

    return 0;
}