//pointer ile dizinin elemanlari toplami 

#include<stdio.h>
int main(){
    int dizi[100];
    int *ptr, i,n,sum=0;
    ptr=dizi;

    printf("dizinin eleman sayisini giriniz:");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        printf("dizinin %d. elemanini giriniz:", i+1);
        scanf("%d", ptr+i);
        sum+=*(ptr+i);
    }
    printf("dizinin elemanlari toplami: %d", sum);
    return 0;
}