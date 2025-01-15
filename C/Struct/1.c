/*
Ders devam listesinde bulunan öğrenciler için kullanılacak ‘student’
isimli struct yapısını, ‘number’, ‘name’, ‘surname’, ve ‘midtermGrade’
alanlarından oluşacak şekilde tanımlayınız. Tanımladığınız bu yapıyı
kullanarak 10 öğrenci için bir struct dizisi oluşturunuz ve klavyeden
3 öğrencinin bilgilerini alınız. Daha sonra bilgileri alınan
öğrencilerin bilgilerini ekrana yazdırınız. 
*/

#include<stdio.h>
#include<stdlib.h>
int main(){

    struct student{
        int number;
        char name[15];
        char surname[15];
        int midtermGrade;
    }student[10];

    int i,k;


    for(i=0; i<3; i++){
        printf("%d. STUDENT NUMBER:\n",i+1);scanf("%d",& student[i].number);
        printf("%d. STUDENT NAME:\n",i+1);scanf("%s", student[i].name);
        printf("%d. STUDENT SURNAME\n",i+1);scanf("%s", student[i].surname);
        printf("%d. STUDENT MİDTERM GRADE:\n",i+1);scanf("%d",& student[i].midtermGrade);
    }
    
    for(int k=0; k<3; k++){
        printf("%d. STUDENT NUMBER:%d\n", k+1, student[k].number);
        printf("%d. STUDENT NAME:%s\n", k+1,student[k].name);
        printf("%d. STUDENT SURNAME:%s\n", k+1,student[k].surname);
        printf("%d. STUDENT MİDTERM GRADE:%d\n", k+1,student[k].midtermGrade);
        printf("*******************\n");
    }
    return 0;
}