#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){

    int matrix[4][5]= {{5},{6},{7},{8}};
    int d=5;


    for(int i=0;i<4;i++){
        for(int k=0;k<5;k++){
            printf("%d  ",matrix[i][k]);
        }
        printf("\n\n");
    }

    printf("\n");
     
    for(int i=0;i<4;i++){
        for(int k=1;k<5;k++){
            printf("%d  ",matrix[i][k]=matrix[i][k-1]+d);
        }
        printf("\n\n");
    }


    return 0;
}