// soru7:  çarpim toblosunu yazdiran program
#include<stdio.h>

int carpimtablosu(int b)
{
    int i;
    if(b<=10)
    {
        for(i = 1; i<11; i++){
        printf("%-3d", b*i);
        }
        printf("\n");
        return carpimtablosu(b+1);
    }
 }

void main(){
    int a=1;
    printf ("%d", carpimtablosu(a));
 }