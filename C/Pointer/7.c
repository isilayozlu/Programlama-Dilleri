//pointer ile diziyi stringi cevir

#include<stdio.h>
int main(){
    char str[100];
    char *ptr, *ptr2;
    int i;

    printf("bir seyler yaziniz:");
    gets(str);
    ptr=str;

    for(i=0; *(ptr+i)!='\0'; i++){
    }
    i--;
    for(i; i>=0; i--){
        printf("%c", *(ptr+i));
    }
    return 0;
}