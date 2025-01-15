// soru 6: dizideki en küçük elemanı yazdıran program

#include <stdio.h>
int kucukeleman(int a[], int i){
    int kucukdeger;
    if (i == 0)
    return a[0];
    
    else
    kucukdeger = kucukeleman(a, i-1);
    
    if (kucukdeger < a[i-1])
    return kucukdeger;
    
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
    printf("%d", kucukeleman(b, 5));
    return 0;
 }