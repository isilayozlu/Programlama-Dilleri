/*SORU 1:
Main fonksiyonu içerisinde verilen bir doğal sayıya kadar
olan (bu sayı dahil) tüm sayıların toplamını rekürsif
bir fonksiyon kullanarak hesaplayanız.*/


#include<stdio.h>
int toplam(int n){
    if(n>0)
    return n+toplam(n-1);

    else
    return 0;
}

void main(){
    int x;
    printf ("bir sayi giriniz:");
    scanf ("%d", & x);
    printf ("%d", toplam(x));
}