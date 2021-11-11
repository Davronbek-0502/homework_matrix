#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main(){
    int matrix[4][6];

    srand(time(NULL));
    printf("\n\n\n");
 
    for(int i=0; i<4; i++){
        for(int j=0; j<6; j++){
            matrix[i][j]=rand()%20; 
            printf("%d \t", matrix[i][j]);
        }
        printf("\n");
    }
        printf("\n\n");

    for(int i=0; i<4; i++){
        for(int j=1; j<6; j+=2){

            printf("%d \t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}