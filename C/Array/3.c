/*Girilen cümledeki sesli harf sayısını bulan program*/ 
 #include<stdio.h>

int sesliharf(char x[]);
void main(){
    char s[40];
    printf ("bir seyler yaziniz:");
    gets(s);
    printf ("%d",sesliharf(s));
 }

int sesliharf(char x[]){
    int s=0;
    for (int i=0; x[i]!='\0'; i++){
        if((int)x[i]==97 || (int)x[i]==101 || (int)x[i]==106|| (int)x[i]==111 || (int)x[i]==117 ||
        (int)x[i]==65 || (int)x[i]==69 || (int)x[i]==73|| (int)x[i]==79 || (int)x[i]==85){
            s++;
        }
    }
    return s;
}