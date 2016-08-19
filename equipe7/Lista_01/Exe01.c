/* equipe:
    Fabiana Bezerra
    Paulo Roberto
    Paulo Silveira
    Pedro Sena
    
1. Reescreva o programa abaixo usando ponteiros
 
    int main ()
    {
    float matrx [50][50]; int i,j;
    for (i=0;i<50;i++)
    for (j=0;j<50;j++) matrx[i][j]=0.0;
    return(0); 
    }
    
*/    

#include<stdio.h>
#include<stdlib.h>

#define MAX 50

int main()
{
    float **matrx = (float**) malloc (sizeof(float*) * MAX);
    int i,j;
    for(i=0;i<MAX;i++)
    {
        matrx[i] = (float*) malloc (sizeof(float)*MAX);
        for(j=0;j<MAX;j++)
            matrx[i][j]=0.0;
    }
    free(matrx);
    return 0;
}

