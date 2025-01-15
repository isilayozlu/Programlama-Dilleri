// pointer ile diziyi tersine cevir

#include<stdio.h>
int main(){
    int dizi[100];
    int n,i,k;
    int *ptr;

    printf ("dizinin kaç eleman sayisini giriniz:");
    scanf("%d",& n);

    for(i=0; i<n; i++){
        printf("dizinin %d. elemanini giriniz:", i+1);
        scanf("%d",& dizi[i]);
    }
    ptr=dizi;

    i--;
    k=0;
    for(i; i>=0; i--){
        printf("%d. eleman: %d\n", k+1, *(ptr+i));
        k++;
    }
    return 0;
}