/* SORU11: Write an algorithm and draw a flowchart to count and print all numbers from 
LOW to HIGH by steps of STEP. Test with LOW=0 and HIGH=100 and 
STEP=5. */
/*
#include <stdio.h>
int main()
{
  int x;
  x=0;
  while(x<=100)
  if(x%5==0){
    printf ("%d\n", x);
    x++;
  }
  else
    x++;
}*/



/* SORU12: Write an algorithm and draw a flowchart to print the multiplication table for 6's. */
/*
#include <stdio.h>
int main ()
{
  int x,ç;
  x=1;
  while (x<=10)
  {
  ç=(6*x);
  printf ("%d\n", ç);
  x++;
  }
}*/



/* SORU13: Draw a flowchart for computing factorial N (N!). */
/*
#include <stdio.h>
int main ()
{
  int n,F,x;
  printf ("bi sayi giriniz:");
  scanf ("%d",&n);
  x=1;
  F=1;
  while (x<=n)
  {
    F=(x*F);
    x++;
  }
  printf ("%d", F);
}*/



/* SORU14: Draw a flow chart to print all natural numbers in reverse (from n to 1). */
/*
#include <stdio.h>
int main ()
{
  int n;
  printf("n degerini giriniz:");
  scanf ("%d",&n);

  while(n>=1)
  {
    printf ("%d\n" ,n);
    n--;
  }
}*/



/* SORU15: Design an algorithm which generates even numbers between 1000 and 2000 
and then prints them in the standard output. It should also print total sum. */
/*
#include <stdio.h>
int main()
{
  int x,top;
  x=1000;
  top=0;
  while (x<=2000)
{
  if (x%2==0)
  {
    printf("%d\n",x);
    top=(x+top);
    x++;
  }
  else
  x++;
}

printf("%d\n", top);
}*/



/* SORU16: Draw a flow chart to print multiplication table of any number. */
/*
#include<stdio.h>
int main()
{
  int x,c,T;
  printf("bir sayi giriniz:");
  scanf ("%d", &x);
  c=1;

  while(c<11)
  {
    T=(c*x);
    printf("%d\n", T);
    c++;
  }
}*/


/* SORU17: Draw a flow chart to count number of digits in a number. */
/*
#include<stdio.h>
int main()
{
  int x,bas;
  printf ("bir sayi giriniz:");
  scanf ("%d" ,&x);
  bas=1;
  while (x>9){
    x=(x/10);
    bas++;
  }
 printf ("%d",bas);
}*/




/* SORU18: Draw a flow chart to find first and last digit of a number. */
/*
#include<stdio.h>
int main()
{
  int x,ir,sr;
  printf("bir sayi giriniz:");
  scanf("%d", &x);

  sr=(x%10);
  printf ("son rakam:%d\n", sr);

  while (x>9)
  {
    x=(x/10);
  }
  ir=x;
  printf ("ilk rakam:%d\n", ir);
}*/



/* SORU19: Draw a flow chart to check whether a number is palindrome or not.*/
/*
#include<stdio.h>
int main ()
{
  int n,ib,t,k;
  printf("bir sayi giriniz:");
  scanf ("%d", &n);
  t=0;
  k=n;
   while(n>0)
   {
    ib=(n%10);
    t=t*10+ib;
    n=(n/10);
   }
  if(k==t)
   printf ("palindrom sayidir");
  else
   printf ("polindrom sayi değildir");
}*/


/* SORU20: Klavyeden bir öğrenci için öğrenci no, vize ve final girildiğinde, öğrencinin 
vize notunun %40’ı ve final notunun %60’ı alarak geçme notunu hesaplayan ve 
öğrencinin numarası ile birlikte ekrana sonucu yazdıran programı C dili ile 
yazınız.*/

/*
#include<stdio.h>
int main ()
{
    int  ögrencino, vize,final, gecmenotu;

    printf ("öğrenci no giriniz:");
    scanf ("%d", &ögrencino);

    printf ("vize notunu giriniz:");
    scanf ("%d", &vize);

    printf ("final notunu giriniz:");
    scanf ("%d", &final);

    gecmenotu=(vize*0.4+final*0.6);

    printf ("ögrencino:%d\n" "gecmemnotu:%d\n" ,ögrencino, gecmenotu);
    return 0;
}*/