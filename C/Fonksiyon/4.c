/* SORU4: İki ayrı fonksiyon oluşturarak bir tamsayının asal sayı mı
yoksa Armstrong mu yoksa her ikisi mi olduğunu kontrol etmeyi
sağlayan programı yazınız. */


#include<stdio.h>
int arm(int x);
int asal(int x);

void main(){
    int a;
    printf ("bir sayi giriniz:");
    scanf ("%d",& a);
    asal(a);
    arm (a);
}

int asal(int x)
{
    int c=0;
    int i=x;
    i--;

for (i; i!=1; i--)
{
    if(x%i==0)
    {
        printf ("asal değildir\n");
        c=1;
        break;
    }
}
if(c==0){
    printf ("asal sayidir\n");
}
return 0;
}

int arm(int x){
    int top=0;
    int bas,sayi,y;
    y=x;
    while(x>9){
        bas=x%10;
        sayi=bas*bas*bas;
        top=top+sayi;
        x=x/10;
    }
    sayi=x*x*x;
    top=top+sayi;

    if(top==y){
        printf("armstrong sayidir\n");
    }
    else
    printf ("armstrong sayi degildir\n");
    return 0;
}