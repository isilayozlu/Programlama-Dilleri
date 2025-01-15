/*Aşağıdaki iki boyutlu dizinin üst üçgen öğeleri ile alt üçgen
öğelerini yer değiştiren bir C main programı yazın. */

#include<stdio.h>
#define SIZE 4

void swap(int matrix[SIZE][SIZE]);
void print(int matrix[SIZE][SIZE]);

int main(){
    int matrix[SIZE][SIZE]={
    {1,2,3,4},
    {5,6,7,8},
    {9,10,11,12},
    {13,14,15,16}};

    printf("girilen matrix:\n");
    print(matrix);

    swap(matrix);

    printf("çıktı matrisi:\n");
    print(matrix);

    return 0;
}


void swap(int matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            // Sadece alt ve üst üçgeni yer değiştir
            if (i > j) {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
    }
}

void print(int matrix[SIZE][SIZE]){
    for(int i=0; i<SIZE; i++){
        for(int j=0; j<SIZE; j++){
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }
}