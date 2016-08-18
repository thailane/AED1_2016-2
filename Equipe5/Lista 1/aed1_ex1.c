/*

Aline Lima
Amanda Leticia
Eduardo Azevedo
Lucas Almeida

1. Reescreva o programa abaixo usando ponteiros:
int main () { 
	float matrx [50][50]; 
	int i,j; 
	for (i=0;i<50;i++) 
		for (j=0;j<50;j++) 
			matrx[i][j]=0.0; 
	return(0); 
}

*/

#include <stdio.h>

int main () 
{ 
	float matrx[50][50], *ponteiro;
	int i, j;
    ponteiro=matrx[0]; // recebe o endereco da matriz
    for (i=0;i<2500;i++) // faz 2500 incrementos no ponteiro para alocar os valores
    {
        *ponteiro=0.0; // pôe o valor zero na matriz
        ponteiro++; // vai para o proximo endereco da matriz
    }
    
    //imprime a matriz para verificar se os elementos estão corretos
    for(i=0;i<50;i++)
    {
    	for(j=0;j<50;j++){
    		printf ("%.2f ", matrx[i][j]);
		}
		printf("\n");	
	}
	return 0;
}

