// soru 5: girilen dizinin en büyük elemanini yazıdr

#include <stdio.h>
int buyukeleman(int a[], int i){
    int buyukdeger;
    if (i == 0)
    return a[0];
    
    else
    buyukdeger = buyukeleman(a, i-1);
    
    if (buyukdeger > a[i-1])
    return buyukdeger;
    
    else
    return a[i-1];
 }


 int main(){
    int b[5];
    for (int i=0; i<5; i++)
    {
        printf ("%d. dizi elemanini giriniz:",i+1 );
        scanf ("%d",& b[i]);
    }
    printf("%d", buyukeleman(b, 5));
    return 0;
 }