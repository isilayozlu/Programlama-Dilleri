/* SORU1: Karenin alanını hesaplayan fonksiyonu
hazırlayıp mainde kullanan programı yazınız.*/

#include<stdio.h>
int KareninAlani(int x);

void main (){
    int x;
    printf ("karenin kenar uzunluğunu giriniz:");
    scanf ("%d", & x);
    printf ("karenin alani: %d", KareninAlani(x));
}

int KareninAlani(int x){
    int alan;
    alan=x*x;
    return alan;
}