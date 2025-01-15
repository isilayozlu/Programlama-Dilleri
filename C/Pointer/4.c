//dizi elemanlarını yazdir

#include<stdio.h>
int main(){
    int dizi[5]= {12,15,43,23,544};
    int i;
    int size= sizeof(dizi)/sizeof(dizi[0]);

    for(i=0; i<size; i++){
        printf("dizinin %d. elemani: %d\n", i+1, *(dizi+i));
    }
    return 0;
}