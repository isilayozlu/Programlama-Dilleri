#include<stdio.h>
#include<stdlib.h>
struct student{
    int no;
    char ad[15];
    int vize;
    int final;
    struct student *next;
};

typedef struct student node;
node *head=NULL;
int ogrencisayisi=0;

void yenikayit();
void listele(node *head);
void güncelle(node *head);
void ortalama(node *head);
void enbasarili(node *head);

int main(){
    int secim;
    while(1){
        printf("[1-5] arasindan saciminizi yapiniz\n");
        printf("***************************\n");
        printf("1- Yeni Kayit Ekleme\n2- Kayit Listeleme\n3- Kayit Güncelleme\n4- Sinif Ortalamasi Hesapla\n5- Ortalamaya Göre En Başarili Öğrenci Bilgisini Göster\n");
        scanf("%d",& secim);

        switch(secim){
            case 1:
            yenikayit();break;

            case 2:
            listele(head);break;

            case 3:
            güncelle(head);
            break;

            case 4:
            ortalama(head);break;

            case 5:
            enbasarili(head);break;

            default:
            printf("yanlis seçim yaptiniz tekrar deneyiniz");break;
        }}
    return 0;    
}


void yenikayit() {
    node *p, *temp;
    temp = (node *)malloc(sizeof(node));

    if (temp == NULL) {
        printf("Bellek tahsisi başarısız\n");
        return;
    }

    printf("NO: "); scanf("%d", &temp->no);
    printf("AD: "); scanf("%s", temp->ad);
    printf("VİZE: "); scanf("%d", &temp->vize);
    printf("FİNAL: "); scanf("%d", &temp->final);
    temp->next = NULL;

    if (head == NULL) {
        head = temp;
    } else {
        p = head;
        while (p->next != NULL) {
            p = p->next;
        }
        p->next = temp;
    }
    ogrencisayisi++;
}


void listele(node *head){
    node *p=head;
    while(p!=NULL){
        printf("NO:%d\n",p->no);
        printf("AD:%s\n", p->ad);
        printf("VİZE:%d\n",p->vize);
        printf("FİNAL:%d\n",p->final);
        p=p->next; 
    }
}


void güncelle(node *head){
    node *p=head;
    int numara, guncel;
    printf("güncellemek istediğiniz öğrencinin numarasını giriniz:");
    scanf("%d",&numara);

    while(p!=NULL){
        if(numara == p->no){
            printf("güncellemek istedğiniz bilgiyi seçiniz:");
            printf("1-no\n2-ad\n3-vize notu\n4-final notu\n");
            scanf("%d",& guncel);

            switch (guncel)
            {
                case 1:
                printf("güncel no:");scanf("%d",& p->no);break;

                case 2:
                printf("güncel ad:");scanf("%s", p->ad);break;

                case 3:
                printf("güncel vize notu:");scanf("%d",& p->vize);break;

                case 4:
                printf("güncel final notu:");scanf("%d",& p->final);break;

                default:
                printf("yanlis seçim, tekrar deneyiniz:");break;
            }
                            
            printf("GÜNCEL ÖĞRENCİ BİLGİLERİ\n");
            printf("************************\n");
            printf("NO:%d",p->no);
            printf("AD:%s", p->ad);
            printf("VİZE:%d",p->vize);
            printf("FİNAL:%d",p->final);
            return;
        }
        p=p->next;
    }
}

void ortalama(node *head){
    node *p=head;
    float ortalama,toplam=0.0;
    int sayac=0;

    while(p!= NULL){
        toplam+=(float)p->vize*0.4+(float)p->final*0.6;
        p=p->next;
        sayac++;
    }
    ortalama=toplam/sayac;
    printf("ORTALAMA:%.2f\n",ortalama);
}


void enbasarili(node *head){
    node *p=head;
    node *q=head;
    float maxort=(float)p->vize*0.4+(float)p->final*0.6;
    p=p->next;

    while(p!=NULL){
        float ort =(float)p->vize*0.4+(float)p->final*0.6;
        if(maxort < ort){
            maxort=ort;
            q=p;
        }
        p=p->next;
    }
    printf("EN BASARILI OGRENCI BILGILERI\n");
    printf("*****************************\n");
    printf("NO:%d",q->no);
    printf("AD:%s", q->ad);
    printf("VİZE:%d",q->vize);
    printf("FİNAL:%d",q->final);
}