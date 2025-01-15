//soru2: 1 den n sayisina kadar olan sayilarin toplami

#include<stdio.h>
#include<stdlib.h>

int toplam(int n){
    if(n==0){
        return n;}

    else{
        return n+toplam(n-1);}
}

int main()
{
    int a;
    printf ("bir sayi giriniz:");
    scanf("%d",& a);
    printf("%d", toplam(a));
    return 0;
}