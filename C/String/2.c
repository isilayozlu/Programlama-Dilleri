//girilen bir cümle veya kelimenin uzunluğunu ve tersini ekrana yazdıran program
#include<stdio.h>
int strLength(char x[]);
int strReverse(char y[], int uzunluk);

void main()
{
    char cumle[40];
    int uzunluk;
    printf ("bir seyler yaziniz:");
    gets(cumle);
    uzunluk=strLength(cumle);
    printf("katarin uzunlugu: %d\n",uzunluk);
    strReverse(cumle,uzunluk);
}

int strLength(char x[]){
    int i, uzunluk=0;
    for(i=0; x[i]!= '\0';i++){
        uzunluk++;
    }
    return uzunluk;
}

int strReverse(char y[], int uzunluk){
    char c[40];
    int i=0;
    for(uzunluk; uzunluk>=0; uzunluk--){
        c[i]=y[uzunluk];
        printf ("%c",c[i]);
        i++;
    }
    return 0;
}
