/* equipe 01:
	Diogo Abreu
	Fernando Calderaro
	Leticia Mota
	Rodrigo Oliveira
	Thailana Neves		
	
	exercicio 01

	Reescreva o programa abaixo usando ponteiros
	int main ()
	{

	int i,j;

		
			matrx[i][j]=0.0;

	
	}
		
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

	float **matrx;
	int i,j;
	matrx=NULL;
	matrx = malloc (50*sizeof (int *));
	
	for (i=0;i<50;i++)
		matrx[i] = malloc (50*sizeof(int));

	for (i=0;i<50;i++)
		for(j=0;j<50;j++)
			matrx[i][j]=0.0;

	for (i=0;i<50;i++)
	{
		for(j=0;j<50;j++)
		{
			printf ("%.2f ",matrx[i][j]=0.0);
		}
	printf("\n");
	}
	
	free(matrx);
	return 0;
}