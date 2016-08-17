#include<stdio.h>
#include<stdlib.h>

#define MAX 50

int main(){
    float **matrx = (float**) malloc (sizeof(float*) * MAX);
    int i,j;
    for(i=0;i<MAX;i++){
        matrx[i] = (float*) malloc (sizeof(float)*MAX);
        for(j=0;j<MAX;j++)
            matrx[i][j]=0.0;
    }
    free(matrx);
    return 0;
}

