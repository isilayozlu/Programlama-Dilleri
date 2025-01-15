/*klavyeden girilen iki kelimeden ikincinin sonuna birinci kelimenin tersini ekleyerek ekrana yazdıran 
programı C dili ile yazınız.*/

#include<stdio.h>
int main()
{
    int i,k,x=0;
    char A[30],B[30],c[30];
    printf ("1. kelimeyi giriniz:");
    gets(A);

    printf ("2. kelimeyi giriniz:");
    gets(B);

    
    k=0;
    for(x;x<30;x++){
        c[x]=B[x];
        if(B[x]=='\0'){
             c[x]=' ';
             break;
        }
    }

    for(i=0; A[i]!='\0'; i++)
    {
        k++;
    }
    
    while(k>=0){
        k--;
        c[x+1]=A[k];
        x++;
    }
    printf ("%s", c);
    return 0;
}
