// soru 13:Herhangi bir sayının kuvvetini hesaplayın
#include <stdio.h>
long int üssü(int x,int y)
{
    long int sonuç=1;
    if(y == 0)
    return sonuç;
    
    sonuç=x*(üssü(x,y-1)); 
}
int main()
{
    int a,üs;
    long int sonuç;
     
    printf("sayiyi gir:");
    scanf("%d",&a);
     
    printf("üssü gir:");
    scanf("%d",&üs);
     
    sonuç=üssü(a,üs);
     
    printf("sonuç; %d", sonuç);
     
    return 0;
}