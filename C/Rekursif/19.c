/*SORU 3:
Main fonksiyonu içerisinde verilen sayinin basamaklarini
toplamini rekürsif bir fonksiyon kullanarak bulunuz.*/

#include<stdio.h>
int basamak_toplam(int a){
    int basamak;
    if(a<10)
    return a;

    else{
        basamak=a%10;
        return basamak+basamak_toplam(a/10);
    }
}

void main(){
    int sayi;

    printf ("bir sayi giriniz:");
    scanf ("%d",& sayi);

    printf ("girilen sayinin basamalari toplami:%d", basamak_toplam(sayi));
}