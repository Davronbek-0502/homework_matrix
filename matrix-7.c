#include<stdio.h>
#include <stdlib.h>
#include<stdbool.h>


int main(){
    int matrix[5][5],satr;
    printf("\n");
    printf("satr=");
    scanf("%d",&satr);
      printf("\n");
      for(int i=0; i<5; i++){
      for(int j=0; j<5; j++){
      matrix[i][j] = rand()%20;
      printf("%d \t", matrix[i][j]);
        }
        printf("\n\n\n");
    }
    for(int i=0; i<5; i++){
    for(int j=0; j<5; j++){
    
      if(i==satr){
      printf("%d \t", matrix[i][j]);
    }
    }
        printf("\n\n\n");
    }

    return 0;
}