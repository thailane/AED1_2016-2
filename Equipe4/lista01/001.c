#include<stdio.h>
#include<stdlib.h>


int main(){

    float **matriz;
    int i,j;



    matriz=(float**)calloc(50,sizeof(float*));

    if(matriz==NULL){

        printf("Erro: memoria insuficiente.");

        return (1);

    }


    for (i=0;i<50;i++){

        matriz[i]=(float*)calloc(50,sizeof(float));


        if (matriz[i]==NULL){

            printf("Erro: memoria insuficiente");

            return(1);
        }

    }



    for (i=0;i<50;i++){

        for (j=0;j<50;j++){


            matriz[i][j]=0.0;
        }


    }

    free(matriz);

    return (0);

}
