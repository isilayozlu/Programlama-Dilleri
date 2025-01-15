// soru 9: ebob bulma
#include<stdio.h>

int ebob(int a,int b)
{
    while(a!=b)
    {
        if(a>b)
        return ebob(a-b,b);
        
        else
        return ebob(a,b-a);
    }
    return a;
}

void main(){
    int a,b;
    printf ("1. sayiyi girinz:");
    scanf ("%d",& a);

    printf("2. sayiyi giriniz:");
    scanf("%d",& b);
    printf ("%d", ebob (a,b));
}