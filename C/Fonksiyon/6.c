/* SORU 2: 
Boy ve kilo bilgisini alarak vücut kitle indeksini hesaplayan
kitleIndeks isimli bir fonksiyon yazınız. Bu fonksiyon aşağıda 
verilen tabloya göre değer döndürmektedir. Yazdığınız fonksiyonu
main fonksiyonunda çağırarak kullanın ve bir program yazınız.*/


#include<stdio.h>
int kitleindeks (float boy, int kilo){
    float indeks;
    indeks=kilo/(boy*boy);
    printf ("vücut kitle indeksi: %f\n", indeks);
    
    if(indeks>0 && indeks<18)
    return 1;

    else if (indeks>18 && indeks<25)
    return 2;

    else if (indeks>25 && indeks<30)
    return 3;

    else
    return 4;
}
void main(){
    int kilo,A;
    float boy;

    printf ("boy bilgisini metre cinsinden giriniz:");
    scanf ("%f",& boy);

    printf("kilo bilgisini giriniz:");
    scanf ("%d",& kilo);

    A=kitleindeks(boy,kilo);

    switch (A)
    {
    case 1:
        printf ("zayif\n");
        break;
    
    case 2:
        printf ("normal");
        break;

    case 3:
        printf ("kilolu\n");
        break;

    default:
        printf ("obez");
        break;
    }
}