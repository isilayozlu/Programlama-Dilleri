#include<stdio.h>
int teksayi(int *x, int i){
    static int adet=0;
    if(i==0){
        return adet;
    }
    else
    {
        if (x[i-1]%2==1)
        adet++;
    }
    teksayi(x, i-1);
}

void main (){
    int n;
    
    printf ("dizinin boyutunu giriniz:");
    scanf ("%d",&n);
    int a[n], sonuc;
    for(int i=0; i<n;i++)
    {
        printf ("dizinin %d. elemanini giriniz:",i+1);
        scanf("%d",&a[i]);
    }
    sonuc=teksayi(a,n);
    printf ("dizide %d adet tek sayi vardir.", sonuc);
}