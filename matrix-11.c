#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main(){
    int matrix[5][4],count;

    srand(time(NULL));
    printf("\n\n\n");
 
    for(int i=0; i<5; i++){
        for(int j=0; j<4; j++){
            matrix[i][j]=rand()%20; 
            printf("%d \t", matrix[i][j]);
        }
        printf("\n");
    }
        printf("\n\n");
    
    for(int i=0; i<5; i++){
         count=0;
        for(int j=0; j<4; j++){
               if (i%2==0 && count<4){
                for (int k = 4-1; k >= 0; k--){
                    printf(" %d\t", matrix[i][k]);
                    count++;
                }
            }else if (i%2==1)  {
                    printf(" %d\t", matrix[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}