/*SORU 4:
Main fonksiyonu içerisinde verilen iki pozitif sayıyı
kullanarak bu sayıların en büyük ortak bölenini
rekürsif bir fonksiyon kullanarak bulunuz.*/

#include<stdio.h>
int ebob (int a, int b){
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    
    return ebob(b, a % b);
}

void main(){
    int sayi1,sayi2;

    printf ("1. sayiyi giriniz:");
    scanf("%d", & sayi1);

    printf ("2. sayiyi giriniz:");
    scanf("%d", & sayi2);

    printf ("%d",ebob(sayi1,sayi2));
}