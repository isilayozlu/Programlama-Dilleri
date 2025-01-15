#include<stdio.h>
#include<stdlib.h>

struct student{
    int no;
    char ad[10];
    int vize,final;
    struct student *next;
};

typedef struct student node;

node *head, *p,*q;
int ogrencisayisi=0;

int main(){
while(1){
    int secim;

    printf("AŞAĞIDAKİLERDEN BİRİNİ SEÇİNİZ:\n");
    printf("******************************\n");
    printf("1-kayit ekle\n2-kayit sil\n3-en başarili ogrenci\n4-listele");
    scanf("%d", &secim);

    switch (secim){

        case 1:
        if(ogrencisayisi==0){
            head=(node *)malloc(sizeof(node));
            p=head;
        }

        else{
            p->next=(node *)malloc(sizeof(node));
            p=p->next;
        }
        p->next=NULL;

        printf("NO:");scanf("%d",& p->no);
        printf("AD");scanf("%s", p->ad);
        printf("VİZE");scanf("%d",& p->vize);
        printf("FİNAL");scanf("%d",& p->final);

        ogrencisayisi++;
        printf("KAYİT BAŞARIYLA OLUŞTURULDU\n");
        break;


        case 2:
        p=head;
        q=head;
        int sil,kontrol=0;
        printf("silmek isetdiğiniz kayit no");
        scanf("%d",&sil);
        while(p!=NULL){
            if(sil== p->no){
                q=p->next;
                p=q;
                head=p;
                kontrol=1;
                printf("kayit silindi");
                break;
            }
            p=p->next;
            q=q->next;
        }
        if(kontrol ==0){
            printf("aradiğiniz numaraya ait ögrenci bulunamadi\n");
        }
        break;

        case 3:
        p=head;
        q=head;

        while(p!=NULL){
            float max=(float)p->vize*0.4+(float)p->final*0.6;
            p=p->next;

            while(p!=NULL){
                if(max<(float)p->vize*0.4+(float)p->final*0.6){
                    max=(float)p->vize*0.4+(float)p->final*0.6;
                    q=p;
                }
                p=p->next;
            }
            printf("en basarili ogrenci bilgileri");
            printf("NO:%d",q->no);
            printf("AD:%s", q->ad);
            printf("VİZE:%d", q->vize);
            printf("FİNAL:%d", q->final);
        }
        break;

        case 4:
        p=head;

        while(p!=NULL){
            printf("NO:%d\tAD:%s\tVİZE:%d\tFİNAL:%d",p->no, p->ad, p->vize, p->final);
            p=p->next;
        }
        break;

        default:
        printf("yanlis seçim\n");break;
    }
}
}