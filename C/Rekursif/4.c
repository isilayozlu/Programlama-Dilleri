// soru3: girilen sayının rakamlari toplami verir

#include<stdio.h>
int rakamtoplam(int a){
    if (a<9){
        return a;
    }
    else{
        return a%10 + rakamtoplam(a/10);
    }
}

int main (){
    int b;
    printf("enter a number:");
    scanf ("%d", & b);
    printf ("rakamlari toplami: %d", rakamtoplam(b));
    return 0;
}