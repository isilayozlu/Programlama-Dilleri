// N elemanlı A ve B dizilerini toplayarak c dizisini oluştur ve yazdır

#include<stdio.h>
int main()
{
    int N,A[N],B[N],C[N],i;
    printf ("N eleman sayisini giriniz:");
    scanf ("%d", &N);

    for (i=0; i<N; i++)
    {
        printf("A dizisinin eleman değerini giriniz:", N);
        scanf ("%d", &A[i]);
    }

    for (i=0; i<N; i++)
    {
        printf ("B dizisinin elemanini giriniz:");
        scanf ("%d", &B[i]);
    }

    for (i=0; i<N; i++)
    {
        C[i]=A[i]+B[i];
        printf ("C dizisi: %d\n", C[i]);
    }
    return 0;
}