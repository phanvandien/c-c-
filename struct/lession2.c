#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


struct SV{
    char ma[50];
    char ten[100];
    float gpa;
};

typedef struct SV SV;

void nhap(SV *a){
    scanf("%s", a->ma);
    getchar();
    gets(a->ten);
    scanf("%f",&a->gpa);

}

void in(SV a){
    printf("%s %s %.2f\n",a.ma, a.ten, a.gpa);
}

void sx(SV a[], int n){
    for(int i=0;i<n;i++){
      int max_idx = i;
      for(int j=i+1;j<n;j++){
        if(a[j].gpa > a[max_idx].gpa){
            max_idx = j;
        }
      }
      SV tmp = a[i];
      a[i] = a[max_idx];
      a[max_idx] = tmp;
    }
    
}

int cmp(const void *a,const void *b){
    SV *x = (SV*)a;
    SV *y = (SV*)b;
    if(x->gpa < y->gpa) return 1;
    else return -1;

}

int main(){

    int n;
    scanf("%d",&n);
    SV a[n];
    for(int i=0;i<n;i++) nhap(&a[i]);
    for(int i=0;i<n;i++) in(a[i]);
    //sx(a,n);
    qsort(a,n,sizeof(SV),cmp);
    for(int i=0;i<n;i++) in(a[i]);

}
