// soru14: dizi palindrom mu deil mi
#include <stdio.h>
#include <string.h>
 
void palindrom(char A[], int i)
{
    int j = strlen(A)-(i+1);
    if (A[i] == A[j])
    {
        if (i+1==j || i==j)
        {
            printf("PALİNDROM");
            return;
        }
        palindrom(A, i+1);
    }
    else
        printf("PALİNDROM DEĞİL");
}

int main()
{
    char A[25];
    printf("bir seyler yaziniz:");
    scanf("%s", A);
    palindrom(A, 0);
    return 0;
}