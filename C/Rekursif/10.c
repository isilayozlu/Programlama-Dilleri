// soru8: N den 1'e kadar yazdiran program

#include<stdio.h>

int sira(int x){
    if(x<1)
    return 0;

    else
    printf ("%d\n",x);
    return sira(x-1);

}
void main(){
    int a;
    printf("bir sayi giriniz:");
    scanf ("%d", &a);
    sira(a);
}