#include<stdio.h>
#define ROWS 3
#define COLS 3

int main(){
    int i, j;
    float num, matrix[ROWS][COLS];
    for(i = 0; i < ROWS; i++)
        for(j = 0; j < COLS; j++){
            scanf("%f", &matrix[i][j]);
        }

    if (matrix[0][1] == 0 && matrix[0][2] == 0 && matrix[1][0] == 0 
    && matrix[1][2] == 0 && matrix[2][0] == 0 && matrix[2][1] == 0){
        printf("This is a scalar matrix");
    }
    else{
        printf("This is not a scalar matrix");
    }
    return 0;
}
