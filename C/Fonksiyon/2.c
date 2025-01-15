/*SORU2: Fonksiyona gönderilen beş sayının ortalamasını
hesaplayıp geri döndüren programı yazınız. */

#include<stdio.h>
int ortalama(int x[]);

void main(){
    int x[5];
    for (int i=0; i<5; i++){
        printf ("bir değer giriniz:");
        scanf ("%d",& x[i]);
    }
    printf("%d", ortalama(x));
}

int ortalama(int x[]){
    int top=0;
    int ort;
    for (int i=0; i<5; i++){
        top=top+x[i];
    }
    ort=(top/5);
    return ort;
}