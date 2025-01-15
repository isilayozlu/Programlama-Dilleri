//ekok

#include <stdio.h>
 
int ebob(int x, int y) {
    if (y == 0)
        return x;
    return ebob(y, x % y);
}
 
int ekok(int x, int y) {
    return x * y / ebob(x, y);
}
 
int main() {
    int sayi1, sayi2;
    printf ("bir sayi gitiniz:");
    scanf("%d",& sayi1);
    
    printf ("bir sayi gitiniz:");
    scanf("%d",& sayi2);

    int sonuc = ekok(sayi1, sayi2);
    printf("ekok= %d",sonuc);
    return 0;
}