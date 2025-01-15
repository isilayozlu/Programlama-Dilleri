// soru 11: sayı asal mi deil mi

#include<stdio.h>
int i;

int asalmi(int b)
{
    if(i==1)
        return 1;
    
    else if(b %i==0)
         return 0;

    else
    {
         i = i -1; 
         asalmi(b);
    }
} 

int main()
{
    int a,sayi;
	
    printf(" bir sayi gir");
    scanf("%d",&a);
    i = a/2;
    sayi = asalmi(a);

   if(sayi==1)
        printf("asal sayidir");
   else
      printf(" asal deil");
   return 0;
}