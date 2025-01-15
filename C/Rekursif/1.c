//soru1: faktoriyel

#include<stdio.h>
#include<stdlib.h>
int fak(int a){
    if(a>1){
        return a*fak(a-1);
    }
    else{
        return 1;
    }
}
int main (){
    int a;
    printf ("please enter a number:");
    scanf ("%d", & a);
    printf ("%d", fak(a));
    return 0;
}