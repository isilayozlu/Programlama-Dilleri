#include<stdio.h>
int main(){
    int a[6]={1,3,5,7,9};
    int c,i=0;

    printf("Bir rakam giriniz:");
    scanf("%d" ,&c);

    //Girilen değerden küçük bir değer olduğunda duracak ve bu sayede uzunluğu vermiş olacak:
    for(i;i<5;i++){
        if(c<a[i]){
            break;
        }
    }

    //Değerleri bir sağa kaydırıyorum ki 1 tane boş yuva açabileyim.
    for(int b=5; b>=i;b--){
        a[b]=a[b-1];
    }
    
    //Değerimi açılan yuvaya atıyorum.
    a[i]=c;

    //Array'imi ekrana yazdırıyorum.
    for(i=0;i<6;i++){
        printf("%d\n",a[i]);
    }

    return 0;
}