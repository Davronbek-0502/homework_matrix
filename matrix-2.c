#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main(){
    int massiv[5][5];

    srand(time(NULL));
    printf("\n\n\n");

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){

            printf("%d \t", massiv[i][j]=i*5);
        }
        printf("\n\n\n");
    }

    return 0;
}