// 1 den N ye kadar yazdıran rekürsif


#include<stdio.h>
int sirala(int N)
{
if(N==0)
{
    return 0;
}

else
{
    sirala(N-1);
    printf ("%d -> ",N);
}
}

void main(){
    int x;
    printf ("enter a number:");
    scanf ("%d", & x);
    sirala(x);
}