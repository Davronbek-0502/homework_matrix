#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    int massiv[5][5];
    printf("\n\n\n");

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){

            printf("%d \t", massiv[i][j]=j*10);
        }
        printf("\n\n\n");
    }

    return 0;
}