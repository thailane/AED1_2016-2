/* equipe 01:
	Diogo Abreu
	Fernando Calderaro
	Leticia Mota
	Rodrigo Oliveira
	Thailana Neves		
	
	exercicio 02		*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	float *n;
	int i,j,temp;
	n = NULL;
	
	n = malloc (5 *sizeof(float));
	
	for(i=0;i<5;i++)
	{
		printf("insira o %do numero \n",(i+1));
		scanf("%f",&n[i]);
	}
	
	for(i=0;i<4;i++)
	{
		for(j=1;j<4;j++)
		{
			if(n[j]>n[j+1])
			{
				temp = n[j];
				n[j] = n[j+1];
				n[j+1] = temp;
			}
		}
	}
	
	for (i=0;i<5;i++)
	{
		printf("%do numero: %.2f \n",(i+1),n[i]);
	}
	free(n);
	return 0;
}