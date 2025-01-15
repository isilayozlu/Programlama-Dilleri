/* Klavyededn girilen n elemanlı bir A dizisinin
aritmatik ortalamasını bulup bu ortalamadan küçük değerleri
B dizisine, büyük değerleri C dizisine yerleştiren progam */

#include<stdio.h>
int main()
{
    int i, A[5], toplam;
    float ort;
    toplam=0;

    for (i=0 ; i<5 ; i++)
    {
        printf ("bir sayi giriniz:");
        scanf ("%d",& A[i]);
        toplam=toplam+A[i];
    }

    ort = (toplam/5);

    for (i=0; i<5 ;i++)
    {
        if(ort>A[i])
        {
        printf ("B dizisi elemanlari: %d\n", A[i]);
        }

        else
        {
            printf ("C dizisi elemanlari: %d\n", A[i]);
        }
    }

    return 0;
}