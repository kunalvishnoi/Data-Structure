#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){

    int ar[10][10],maxSum = -36985247;
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++)
           scanf("%d",&ar[i][j]);
    }

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            
                int sum = ar[i][j] + ar[i][j+1] + ar[i][j+2] + ar[i+1][j+1] + ar[i+2][j] + ar[i+2][j+1] + ar[i+2][j+2];
                if(sum > maxSum)
                    maxSum = sum;
            
        }
    }
    printf("%d",maxSum);
    return 0;
}
