//soru12: ondaliik sayiyi binaryye dönüştür

#include<stdio.h>
long binaryyap(int ondalik)
{
    static long binary,r,fctor = 1;

    if(ondalik != 0)
    {
         r= ondalik%2;
         binary=binary+r*fctor;
         fctor=fctor*10;
         binaryyap(ondalik/2);
    }
    return binary;
}
int main()
{
    long binary;
    int ondalik;
    printf("bir asyi giriniz:");
    scanf("%d",&ondalik);
    binary = binaryyap(ondalik);
    printf("binary formati: %d",binary);
    return 0;
}