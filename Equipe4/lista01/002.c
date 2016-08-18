/*Equipe 4:

Matheus Obando
Fabíola Maciel
Jefferson Avilar

2. Faça um programa usando ponteiros, para ordenar 5 números e mostrá­-los ordenados na tela.*/

#include<stdio.h>
#include<stdlib.h>


int main()
{

    	int *vetor;
    	int i,j;
    	int aux;

    	vetor=(int*)calloc(5,sizeof(int));

    	for (i=0;i<5;i++){


        	printf("Digite o elemento %d: ",i+1);
        	scanf("%d",&vetor[i]);
        	printf("\n");
    	}

    	for (i=0;i<5;i++){

        	printf("%d",vetor[i]);

    	}

    	printf("\n");

    	for (i=4;i>0;i--){

        	for (j=0;j<i;j++){

            		if(vetor[j]>vetor[j+1]){

                		aux=vetor[j];
                		vetor[j]=vetor[j+1];
                		vetor[j+1]=aux;
			}
		}
    	}


    	for (i=0;i<5;i++){

        	printf("%d",vetor[i]);

    	}


    	return (0);


}
