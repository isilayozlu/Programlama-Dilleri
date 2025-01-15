/* SORU3: Bir sayının çift mi tek mi olduğunu kontrol
eden fonksiyonu ve kullanımını gösteren programı yazınız. */

#include<stdio.h>
void tekcift(int a);
void main(){
    int x;
    printf("bir sayi giriniz:");
    scanf ("%d",&x);
    tekcift(x);
}

void tekcift(int a){
    if(a%2==0){
        printf("cifttir");
    }
    else
    printf ("tektir");
}