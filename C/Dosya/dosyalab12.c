#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int no;
char ad[15];
char bolum[30];
FILE *myptr;

void kayitekle(){
    if((myptr=fopen("ogrkayit.txt","a+")) == NULL )
    printf("dosya oluşturulamadi");

    else{
        printf("dosya başariyla oluşturuldu\n");
        printf("no   :");scanf("%d",&no);
        printf("ad   :");scanf("%s", ad);
        printf("bölüm:");scanf("%s",bolum);

        fprintf(myptr,"%d %s %s\n", no,ad,bolum);
        printf("dosyaya kayit islemi tamamlandi\n");
        fclose(myptr);
    }
}


void listele(){
    if((myptr= fopen("ogrkayit.txt", "r"))== NULL)
    printf("dosya acilamadi");

    else{
        printf("DOSYA AÇILDI\n");
        printf("KAYITLI ÖĞRENCİLER\n");
        printf("NO:\t AD:\t BÖLÜM:\n");

        fscanf(myptr,"%d%s%s", &no,ad,bolum);
        while(!feof(myptr))
        {
            printf("%d %s %s\n",no,ad,bolum);
            fscanf(myptr,"%d%s%s", &no,ad,bolum);
        }
        printf("*******************\n");  
        fclose(myptr);
    }
}


void ara(){
    char isim[15];
    int sonuc=0;
    printf("aranan ogrenci ismini giriniz:");
    scanf("%s", isim);

    if((myptr= fopen("ogrkayit.txt", "r"))== NULL)
    printf("dosya acilamadi");

    else{
        printf("aranan ogrencinin bilgileri\n");
        printf("***************************\n");
        printf("numara\t ad\t bölüm\n");

        fscanf(myptr,"%d%s%s", &no,ad,bolum);
        while(!feof(myptr))
        {
            if(strcmp(isim,ad)==0){
                printf("%d\t%s\t%s\n", no,ad,bolum);
                sonuc=1;
                break;
            }
            fscanf(myptr,"%d%s%s", &no,ad,bolum);
        }
        fclose(myptr);
    }
    if(sonuc==0)
    printf("aradiğiniz isme sahip ogrenci bulunamamiştir");
}
   

int main(){
    int secim;

    if((myptr=fopen("ogrkayit.txt","w")) == NULL)
        printf("dosya oluşturulamadi\n");
    
    else{
        printf("DOSYA BAŞARIYLA OLUŞTURULDU\n");
        while(1){
        printf("1-KAYIT EKLE\n2-LİSTELE\n3-ARA\nseçeneklerinden biriniz seçiniz:");
        scanf("%d",& secim);

        switch (secim){
        case 1:
        kayitekle();break;

        case 2:
        listele();break;

        case 3:
        ara();break;

        default:
        printf("hatali secim yaptiniz:");break;
    }}}        
return 0;
}