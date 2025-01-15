/*Dizi içindeki çift sayı adedini bulan ve diziyi tersine çeviren program*/

#include<stdio.h>
#define size 10

int evenElements(int arr[]);
void copyRev(int arr[],int rev[]);
void printRev(int rev[]);

int main(void){
    int arr[size],i,rev[size];

    printf("Enter 10 numbers between 1 and 100\n");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>=1 && arr[i]<=100){
        }
        else{
            i--;
            printf("Geçerli bir değer giriniz.");
        }
    }
    int even=evenElements(arr);
    printf("Number of even digits is: %d",even);
    copyRev(arr,rev);
    printf("\n");
    printRev(rev);

    return 0;   
}


int evenElements(int arr[]){
    int a=0;
    for(int i=0;i<size;i++){
        if(arr[i]%2==0){
            a++;
        }
    }
    return a;
}
void copyRev(int arr[],int rev[]){
    int a=size-1;
    for(int i=0; i<size ; i++){
        rev[i]=arr[a];
        a--;
    }
}

void printRev(int rev[])
{
    printf("The reverse array: ");
    for(int i=0;i<size;i++)
        printf("%5d",rev[i]);
}