/*SORU21: Klavyeden bir dairenin yarıçap bilgisi ve işlem türü girildiğinde işlem türü 1 
ise dairenin çevresini hesaplanıp yazdıran 2 girilirse alanının hesaplayıp 
yazdıran, bunların dışındaki girişler için “Yanlış giriş” mesajı vererek sonlanan 
programı C dili ile yazınız.*/

/*
#include<stdio.h>
int main()
{
    int islemtipi,yaricap;
    float cevre,alan;

    printf ("dairenin yaricap bilgisini giriniz:");
    scanf ("%d", & yaricap);

    printf (" 1-çevre hesaplama\n 2-alan hesaplama\n islem tipini giriniz:");
    scanf ("%d",& islemtipi);

    if (islemtipi==1){
        cevre=(2*3.14*yaricap);
        printf ("%.2f", cevre);
    }
    else if (islemtipi==2){
        alan= (3.14*yaricap*yaricap);
        printf ("%.2f", alan);
    }
    else{
        printf ("yanlis giriş!");
    }
    return 0 ;
}*/



/*SORU22: Klavyeden girilen bir para miktarını en az banknot kullanarak oluşturmak 
istediğimizde içinde kaç tane 100, 50, 20 ve 10’luk olduğunu bulan programı C 
dili ile yazınız. Not: Klavyeden girilen para miktarı 10’un katları olmalıdır.*/
/*
#include<stdio.h>
int main()
{
    int a,b,c,d,y;
    printf ("para miktarini giriniz:");
    scanf ("%d", &y);

    if (y%10==0){
            a=(y/100);
            y=(y%100);
            b=(y/50);
            y=(y%50);
            c=(y/20);
            y=(y%20);
            d=(y/10);
        printf ("100'lük banknot sayisi: %d\n"  "50'lik banknot sayisi: %d\n" "20'lük banknot sayisi: %d\n" "10'lük banknot sayisi: %d\n", a,b,c,d);
    }
   else(y%10!=0);
   {
     printf ("Klavyeden girilen para miktari 10'un katlari olmalidir.");
   }
   return 0;
}*/



/*SORU23: 8 elemanlı float diziye klavyeden değer girin. Girilen değerlerin ortalamasını hesaplayıp 
ekrana yazdırın. */
/*
#include<stdio.h>
int main ()
{
	int x[8];
	int i;
	float top,ort;
	i=0;
	top=0;

	while (i!=8){
	printf("bir sayi giriniz:");
	scanf ("%d", &x[i]);
	top=(top+x[i]);
	i++;
	}
	ort= (top/8);
	printf ("%f", ort);
	return 0;
}*/



/*SORU24: Klavyeden -1 girilene kadar girilen sayıları diziye aktaran, ardından her elemanın karesini 
ekrana basan programı yazınız. (Dizi eleman sayısı max 10 olacaktır.)*/
/*
#include<stdio.h>
int main ()
{
    int x[10],karesi,i;
    i=0;
    while(i<10){
    printf("bir sayi giriniz:");
    scanf ("%d", & x[i]);
    
    if(x[i]==-1){
        break;
            }

    else
    {
    karesi= (x[i]*x[i]);
    printf ("%d\n", karesi);
    i++;
    }
    }
    return 0;
}*/



/*SORU24: Maksimum 5 basamaklı sayının basamaklarındaki rakamları diziye atan ve ekrana basan 
programı yazınız. */
/*
#include<stdio.h>
int main()
{
    int x[5],i,y;
    i=0;

    printf ("bir sayi giriniz:");
    scanf ("%d", & y);

    if (y<100000 && y>9999){

          while (i<5){
          x[i]=(y%10);
          y=(y/10);
          i++;
          } 
          i--;

          while (i>=0){
            printf ("%d\n", x[i]);
            i--;
          }
    }

    else{
        printf (" 5 basamakli bir sayi giriniz!");
    }

    return 0;
}*/


/*SORU25: 10 elemanlı diziyi klavyeden alan ve tersten ekrana yazan programı yazınız. 
(1,5,2,4,5,6,78,12,1,3 => 3,1,12,78,6,5,4,2,5,1)*/
/*
#include<stdio.h>
int main()
{
    int x[10],i;
    i=0;

    while (i<10){
        printf ("bir sayi giriniz:");
        scanf ("%d", & x[i]);
        i++;
    }
   
    while (i>=0){
        i--;
        printf ("%d\n", x[i]);
       
    }
    
    return 0;
}*/



/*SORU26: pentagon sayilari Pn=n*(3*n-1)/2 formulune göre üretilmektedir.
100 den küçük pentagon sayilarini ekrana yazdirin.*/
/*
#include<stdio.h>
int main()
{
    int x[8], i;
    i=0;
    x[i]=i*(3*i-1)/2;

    while (i<8){
        i++;
        x[i]=i*(3*i-1)/2;
        printf ("%d\n", x[i]);
    }
    return 0;
}*/


/* SORU27: Aynı satır ve sütün sayısına sahip iki matriksi
toplayan c kodunu yazınız. Matris değerleri klavyeden girilecek*/
/*
#include<stdio.h>
int main()
{
    int a[2][2],b[2][2],c[2][2];
    int i,j;

    for (i=0; i<2;i++){
        for(j=0; j<2; j++){
            printf ("1. matris için değer giriniz:");
            scanf ("%d",& a[i][j]);
        }
    }
    for (i=0; i<2;i++){
        for(j=0; j<2; j++){
            printf ("2. matris için değer giriniz:");
            scanf ("%d",& b[i][j]);
        }
    }

    for(i=0; i<2; i++){
        for (j=0; j<2;j++){
            c[i][j]=a[i][j]+b[i][j];
            printf("%5d", c[i][j]);
        }
        printf("\n");
    }
}*/



/*SORU28:Bir sınıftaki 10 öğrencinin boy ve kilo deperlerini iki boyutlu diziye
klavyeden okuyarak aktaran ve ortalamaboy kilo değerlerini hesaplayarak ekrana yazdıran
programı c dili ile yazınız */
/*
#include<stdio.h>
int main(){
    int a[10][2];
    int i,j,boy,kilo, ortalama_boy, ortalama_kilo;
    kilo=0;
    boy=0;

    for(i=0; i<10; i++){
        printf ("öğrencinin boyunu giriniz:");
        scanf ("%d" ,&a[i][0]);
        boy=boy+a[i][0];
        }
        ortalama_boy=(boy/10);

    for(i=0; i<10; i++){
        printf ("öğrencinin kilosunu giriniz:");
        scanf ("%d", & a[i][1]);
        kilo=kilo+a[i][1];
    }
    ortalama_kilo=kilo/10;

    printf ("boy ortalamasi: %d""kilo ortalamasi: %d", ortalama_boy, ortalama_kilo);
    return 0;
}*/




/* SORU 29: Klavyeden girilen bir string içerisindeki kelimelerde kaçar tane “a” karakteri geçtiğini bularak ekrana yazdıran 
programın C kodunu yazınız (Not: Girilen string ifadenin tüm karakterlerinin küçük harf olduğunu varsayın. 
Programın örnek çalışma ekranı aşağıda verildiği gibi olmalıdır).*/

/*
#include<stdio.h>
int main ()
{
    char A[30];
    printf("bir seyler giriniz:");
    gets(A);
    int k=0;
    int kelime=0;

    for(int i=0; A[i]!='\0' ; i++)
    {
        if((int)A[i]==97)
        {
        k++;
        }

        else if (A[i]==' '){
            kelime++;
            printf ("%d. kelimede %d adet a harfi vardir\n", kelime, k);
            k=0;
        }
    }
    kelime++;
    printf ("%d. kelimede %d adet a harfi vardir\n", kelime, k);
    return 0;
}*/




//SORU30: metin girişine göre, metinde kaç ünsüz harf, sesli harf, rakam ve boşluk olduğunu hesapla

/*
#include <stdio.h>
int main(){
    char Array[50];
    printf("Lütfen birişiler yazınız: ");
    gets(Array);
    int Vowels=0,Con=0,Digit=0,Space=0;

    for(int i=0; i<50; i++){
        if((int)Array[i]>=97 && (int)Array[i]<=122){
            Con++;
        }
        else if((int)Array[i]==65 || (int)Array[i]==69 || (int)Array[i]==73 || (int)Array[i]==79 || (int)Array[i]==85){
            Vowels++;
        }
        else if((int)Array[i]>=48 && (int)Array[i]<=57){
            Digit++;
        }
        else if(Array[i]==' '){
            Space++;
        }
    }

    printf("Vowels: %d \nCon: %d\nDigit: %d\nSpace: %d ",Vowels,Con,Digit,Space);
    return 0;
}*/



/*SORU 31:  Kendisi hariç bütün pozitif tamsayı çarpanlarının toplamı kendisine eşit olan sayılara
mükemmel sayı denir. Örneğin, 28 sayısının kendisi hariç pozitif çarpanları toplamı
1+2+4+7+14 = 28 olduğundan 28 sayısı mükemmel bir sayıdır. Buna göre klavyeden girilen
bir sayının mükemmel sayı olup olmadığını söylenen C programını yazınız.*/
/*
#include<stdio.h>
int main()
{
    int x,i,top;
    top=0;

    printf ("bir sayi giriniz:");
    scanf ("%d", &x);

    for(i=1; x>i;i++){
    if (x%i==0){
    top=top+i;
    }
    }

    if(top==x){
    printf("%d mükemmel sayidir", x);
    }
    else{
    printf("%d mükemmel sayi değildir.",x );
    }
    return 0;
}*/



/* SORU 32: Girilen sayıyı tersine çevien program*/
/*
#include <stdio.h>
int main()
{   
    
    int sayi,i,a,b;
    printf("Bir sayi giriniz:");
    scanf("%d",&sayi);
    i = sayi % 10;
    a = sayi;
    while(sayi > 10)
    {
        sayi = sayi / 10;
    }
    printf("%d",i);

    a = a /10;
    while(a > 10)
    {
        b = a % 10;
        printf("%d",b);
        a = a /10 ;
    }
    
    printf("%d",sayi);

return 0;
}*/