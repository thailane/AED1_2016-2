
//1. Reescreva o programa abaixo usando ponteiros
 
//int main ()
//{
//float matrx [50][50]; int i,j;
//for (i=0;i<50;i++)
//for (j=0;j<50;j++) matrx[i][j]=0.0;
//return(0); 
//}



//Equipe3
//Alerrandro Barreto
//Elisandra Oliveira
//Frank N�polis
//Thiago Cauassa
//Caique Martins
	


#include <stdio.h>
#include <stdlib.h>

int main()
{
	float** matrx;
	int i, j;
	for(i=0; i<50; i++)
	{
    	for(j=0; j<50; j++)
    	        matrx[i][j]=0;
    }

	return 0;
}

