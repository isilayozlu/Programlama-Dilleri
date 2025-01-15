/* SORU 2:
Girilen dizideki en büyük elemanı bulan programı C
dilinde Rekürsif olarak yazınız.*/


#include<stdio.h>
int enbuyuk(int a[],int b){
    int max;
    if (b == 1)
    return a[0];
    max=enbuyuk(a+1, b-1);
    return (a[0] > max) ? a[0] : max;
}

void main(){
    int x[5],i;

    for(i=0; i<5; i++){
        printf ("dizinin %d. elemanini giriniz:", i+1);
        scanf ("%d",& x[i]);
    }
    printf ("%d", enbuyuk(x,5));
}