//soru 4: fibonacci

#include<stdio.h>

int fibonacci (int x){
    if (x==0 || x==1){
        return x;
    }
    else{
        return fibonacci(x-1)+fibonacci(x-2);
    }
}
int main (){
    int a;
    printf ("fibonacci serisini merak ettiğiniz sayiyi giriniz:");
    scanf ("%d", & a);
    for (int i=1; i<=a; i++){
        printf("%d. eleman %d\n",i, fibonacci(i));
    }
    
    return 0;
}