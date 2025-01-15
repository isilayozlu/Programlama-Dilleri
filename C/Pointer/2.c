// 2 sayiyi topla pointer ile

#include<stdio.h>
int topla(int *num1, int *num2);

int main(){

    int num1,num2;
    int *ptr1, *ptr2;

    printf("1. sayiyi giriniz:");
    scanf ("%d", & num1);

    printf("2. sayiyi giriniz:");
    scanf ("%d", & num2);

    ptr1=&num1;
    ptr2=&num2;

    printf("sayilarin toplami:%d\n",topla(ptr1,ptr2));
    printf("1. sayinin adresi: %d\n", ptr1);
    printf("2. sayinin adresi: %d\n", ptr2);
    printf("1. sayi: %d\n", *ptr1);
    printf("2. sayi: %d\n", *ptr2);
    printf("num1 in adresi: %d\n", &num1);
    printf("num2 nin adresi: %d\n", &num2);
    return 0;
}
int topla(int *num1, int *num2){
    return (*num1)+(*num2);
}
