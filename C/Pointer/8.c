//faktoriyel

#include<stdio.h>
int main(){
    int num;
    int result=1;
    int *ptr;

    printf("faktoriyelini istediğiniz sayiyi giriniz:");
    scanf("%d",& num);
    ptr=&num;

    if(*ptr==0)
    printf ("sıfır sayisinin faktoriyeli birdir.");
    
    else{
    while(*ptr!=0){
        result= *ptr * result;
        (*ptr)--;
    }
    printf ("sayinin faktoriyeli: %d", result);}
    return 0;
}