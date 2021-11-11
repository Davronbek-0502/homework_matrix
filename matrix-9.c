#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main(){
    int matrix[6][4];

    srand(time(NULL));
    printf("\n\n\n");
 
    for(int i=0; i<6; i++){
        for(int j=0; j<4; j++){
            matrix[i][j]=rand()%20; 
            printf("%d \t", matrix[i][j]);
        }
        printf("\n");
    }
        printf("\n\n");

    for(int i=0; i<6; i+=2){
        for(int j=0; j<4; j++){

            printf("%d \t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}