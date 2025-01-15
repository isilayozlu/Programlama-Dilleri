/*10 elemanlı tamsayı dizisine klavyeden değerler girilerek
bir fonksiyona gönderilecek. Dizide yer alan en büyük
ilk iki sayıyı bularak ekrana yazdıran fonksiyonu yazınız.*/

#include<stdio.h>
#define SIZE 10
void max(int x[]);

void main(){
    int a[SIZE];
    printf("10 adet sayı giriniz:\n");
    for (int i=0; i<10;i++){
        scanf("%d",& a[i]);
    }
    max(a);
}

void max(int x[]){

    int max=x[0];
    for(int i=0; i<SIZE ;i++){
        if(max<x[i]){
            max=x[i];
        }
    }
    printf("girilen dizideki en büyük sayı:%d", max);
}