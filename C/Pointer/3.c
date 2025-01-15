// pointer ile string uzunluğu bulma

#include<stdio.h>
int main(){
    char str[100];
    int i, sum=0;
    char *ptr;

    printf("bir seyler yaziniz:");
    gets(str);
    ptr=&str;

    for(i=0; *(ptr+i)!='\0'; i++){
        sum++;
    }
    printf("string %d karakterden olusur", sum);
    return 0;
}