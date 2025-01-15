/*Girilen cümledeli kelimelerin son harflerini ekrana yazdıran program*/

#include <stdio.h>
void sonHarf(char s[]);

int main()
{
    char a[100];
    printf("Bir cümle giriniz:\n");
    gets(a);
    sonHarf(a);
    return 0;
}

void sonHarf(char s[])
{
    int i=0,k;
    printf("Girilen cümledeki kelimelerin son harfleri:\n");
    for(i; s[i]!='\0'; i++)
    {
        if(s[i]==' ')
        {
            printf("%c",s[i-1]);
        }
    }
    if(s[i]=='\0')
    {
        printf("%c",s[i-1]);
    } 
}