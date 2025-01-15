#include<stdio.h>
#include<stdlib.h>
#include<string.h>

FILE *myptr;
struct hasta{
    int no;
    char ad[15];
    int yas;
    char hastalik[25];
    };

void hastakaydi(){
    struct hasta bos={0,"",0,""};
        printf("cikis için 0 a basin\n");
        printf("NO      :");scanf("%d",& bos.no);
        while(bos.no!=0){
        printf("AD      :");scanf("%s", bos.ad);
        printf("YAS     :");scanf("%d",& bos.yas);
        printf("HASTALIK:");scanf("%s", bos.hastalik);
        fseek(myptr, (bos.no-1)*sizeof(struct hasta), SEEK_SET);
        fwrite(&bos,sizeof(struct hasta),1,myptr);
        printf("NO      :");scanf("%d",& bos.no);
    }
    printf("dosyaya yazma islemi tamam\n");
}

void arama(){
    int numara;
    int kontrol=0;
    struct hasta bos= {0,"",0,""};
        printf("aradiğiniz hastanin numarasini giriniz:\n");
        scanf("%d", &numara);
        rewind(myptr);
        while(!feof(myptr)){
            fread(&bos,sizeof(struct hasta),1,myptr);
            if(numara == bos.no){
                printf("HASTA BİLGİLERİ\n");
                printf("NO:%d\tAD:%s\tYAS:%d\tHASTALIK:%s\n",bos.no, bos.ad, bos.yas, bos.hastalik);
                kontrol=1;
                break;
            }}
            if(kontrol==0)
            printf("ARADIĞİNİZ NO'YA SAHİP HASTA KAYDİ BULUNAMADI\n");
            }

void kayitsil(){
    int sil;
    int kontrol=0;
    struct hasta bos= {0,"",0,""};
        printf("silmek istediğiniz hasta numarasini giriniz:\n");
        scanf("%d" ,& sil);
        fread(&bos, sizeof(struct hasta), 1,myptr);
        while(!feof(myptr)){
            if(sil == bos.no){
                fseek(myptr, (bos.no-1)*sizeof(struct hasta), SEEK_SET);
                struct hasta bos={0,"",0,""};
                fwrite(&bos,sizeof(struct hasta),1,myptr);
                printf("KAYIT BAŞARIYLA SİLİNDİ\n");
                kontrol=1;
                break;
            }
        fread(&bos, sizeof(struct hasta), 1,myptr);
        }
        if(kontrol==0)
        printf("ARADIĞİNİZ NO'YA SAHİP HASTA KAYDİ BULUNAMADI\n");}

void kayitduzenle(){
    int no,kontrol=0;
    struct hasta bos = {0,"",0,""};
        printf("kaydini düzenlemek istediğiniz hastanin no'sunu giriniz:\n");
        scanf("%d", &no);

        while(!feof(myptr)){
            fread(&bos, sizeof(struct hasta),1, myptr);
            if(no == bos.no){
                fseek(myptr, (bos.no-1)*sizeof(struct hasta), SEEK_SET);
                struct hasta bos={0,"",0,""};
                fwrite(&bos,sizeof(struct hasta),1,myptr);
                printf("YENİ HASTA NO:");scanf("%d", &bos.no);
                printf("YENİ HASTA ADI:");scanf("%s", bos.ad);
                printf("YENİ HASTA YAŞI:");scanf("%d", &bos.yas);
                printf("YENİ HASTALIK:");scanf("%s", bos.hastalik);
                fseek(myptr, (bos.no-1)*sizeof(struct hasta), SEEK_SET);
                fwrite(&bos, sizeof(struct hasta), 1, myptr);
                printf("kayit düzenlendi\n");
                kontrol=1;
                break;
            }}
            
            if(kontrol==0)
            printf("ARADIĞİNİZ NO'YA SAHİP HASTA KAYDİ BULUNAMADI\n");
            }

void listele(){
    struct hasta bos = {0, "", 0,""};
    rewind(myptr);
    fread(&bos, sizeof(struct hasta), 1,myptr);
    while(!feof(myptr)){
        if(bos.no != 0){
        printf("%d\t%s\t%d\t%s\n", bos.no,bos.ad,bos.yas,bos.hastalik);
        }
        fread(&bos, sizeof(struct hasta), 1,myptr);
    }}

int main(){
    int secim;
    struct hasta bos={0,"",0,""};
    int i;

    if((myptr=fopen("hastabilgi.txt", "w"))== NULL)
    printf("dosya oluşturulamadi\n");

    else{
        for(i=1; i<=100; i++)
        fwrite(&bos,sizeof(struct hasta),1,myptr);
        printf("dosya oluşturuldu\n");
        fclose(myptr);

        while(1){
        printf("AŞAĞİDAKİ İŞLEMLERDEN BİRİNİ SEÇİNİZ\n1-HASTA GİRİŞİ\n2-HASTA NO'YA GÖRE ARAMA YAP\n3-HASTA KAYİT SİL\n4-HASTA KAYİT DUZENLE\n5-HASTALARİ LİSTELE\n");
        scanf("%d",& secim);

        if(secim == 1 || secim == 3|| secim || 4){
        if((myptr=fopen("hastabilgi.txt", "r+")) == NULL)
        printf("DOSYA AÇILAMADI\n");}

        else{
        if((myptr=fopen("hastabilgi.txt", "r")) == NULL)
        printf("DOSYA AÇILAMADI\n");}

        switch (secim){
            case 1: hastakaydi();break;
            case 2: arama();break;
            case 3: kayitsil();break;
            case 4: kayitduzenle();break;
            case 5: listele();break;
        }
        fclose(myptr);
        }}  
    return 0;
}
