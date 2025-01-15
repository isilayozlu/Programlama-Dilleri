/*SORU5: Girilen cümleyi parametre olarak alıp içerisindeki
kelime sayısını bulan fonksiyonu yazınız. */

#include<stdio.h>
int kelimesayisi(char c[]){
    int k;
    k=0;
    int i=0;
    while (c[i]!='\0')
    {
        if ((int)c[i]==32)
        {
            k++;
        }
        i++;
    }
    k++;
    return k;
}

int main(){
    char s[40];
    printf ("bir cümle giriniz:");
    gets(s);
    printf("cümlede %d kelime vardir", kelimesayisi(s));
    return 0;
}