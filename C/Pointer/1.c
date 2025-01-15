// 2 sayidan en buyugunu bul

#include<stdio.h>
int main(){
    int num1, num2;
    int *ptr1, *ptr2;

    printf("1. sayiyi giriniz:");
    scanf("%d",& num1);
    
    printf("2. sayiyi giriniz:");
    scanf("%d", & num2);

    ptr1=&num1;
    ptr2=&num2;

    if(*ptr1>*ptr2)
    printf("%d, %d'dan buyuktur.", *ptr1, *ptr2);

    else
    printf("%d, %d'dan buyuktur.", *ptr2, *ptr1);
    return 0;
}