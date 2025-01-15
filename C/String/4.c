// soru 10: diziyi tersine çevir 
#include<stdio.h>

char *dizinintersi(char A[])
{
    static int i=0;
    static char ters[100];
    if(*A)
    {
         dizinintersi(A+1);
         ters[i++] = *A;
    }
    return ters;
}

int main()
{
    char A[100],*ters;
    printf(" Input any string: ");
    scanf("%s",A);

    ters = dizinintersi(A);
    printf(" The reversed string is: %s\n",ters);
    return 0;
}