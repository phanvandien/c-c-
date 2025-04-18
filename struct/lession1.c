#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

// struct HocSinh{
//     char ten[100];
//     double diem;
// };

// struct date{
//     int day,month,year;
// };

// struct hour{
//     int time,minute,seconds;
// };

// struct ticket{
//     date dayWatch;
//     hour hourWatch;
//     char nameMovie[100];
//     double cost;
// };

// struct SinhVien{
//     char id[20];
//     char name[50];
//     double gpa;
//     char class[20];
// };

typedef struct HocSinh HS;

// HS nhap1(){
//     HS x;
//     gets(x.ten);
//     scanf("%lf",&x.diem);
//     return x;
// }
// // con tro
// void nhap2(HS *x){
//  getchar();
//  gets(x->ten);
//  scanf("%lf", &x->diem);
// }

// void in(HS a){
//     printf("%s %.2lf\n",a.ten,a.diem);
// }

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

void timKiem1(SV a[], int n, char m[100]){
    for(int i=0;i<n;i++){
        if(strcmp(m,a[i].ma) ==0){
            in(a[i]);
            return;
        }
    }
    printf("Khong tim thay sinh vien co ma vua nhap \n");
}

void timKiem2(SV a[], int n){
    float res =0;int pos;
    for(int i=0;i<n;i++){
        if(a[i].gpa > res ){
            res = a[i].gpa;
            pos =i;
        }
    }
    in(a[pos]);
}

int main(){
    // SV a;
    // scanf("%s",a.id);
    // getchar();
    // gets(a.name);
    // scanf("%lf%s",&a.gpa,a.class);
    // printf("%s %s %.2f %s\n",a.id,a.name,a.gpa,a.class);
    // SV b=a;
    // printf("%s %s %.2f %s\n",b.id,b.name,b.gpa,b.class);
    // return 0;
    // struct ticket t;
    // t.cost;
    // t.nameMovie;
    // t.dayWatch.day;
    // t.dayWatch.month;
    // t.dayWatch.year;
    // t.hourWatch.time;
    // t.hourWatch.minute;
    // t.hourWatch.seconds;
    //HS a = nhap1();
    /*HS a;
    nhap2(&a);
    in(a);*/
    // HS a[1000];
    // int n;
    // scanf("%d",&n);
    // for(int i=0;i<n;i++) nhap2(&a[i]);
    // for(int i=0;i<n;i++) in(a[i]);

    int n;
    scanf("%d",&n);
    SV a[n];
    for(int i=0;i<n;i++) nhap(&a[i]);
    for(int i=0;i<n;i++) in(a[i]);
    // char s[100];
    // printf("nhap ma sinh vien can tim kiem:");
    // scanf("%s",s);
    // timKiem1(a,n,s);
    timKiem2(a,n);

}
