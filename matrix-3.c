#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main(){
    int m, k;
    srand(time(NULL));
    printf("m=");
    scanf("%d", &m);
    int i=1;
    int massiv[i][m];
    for (k=0; k<m; k++){
        massiv[i][k]=rand()%20;
    }    

        for(int j=0; j<m; j++){
            for(int y=0; y<m; y++){
                printf("%d \t", massiv[i][j]);        
            }
                printf("%d \n", massiv[i][j]);
        
    return 0;
}