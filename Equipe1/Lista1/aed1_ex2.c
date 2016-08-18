/* equipe 01:
	Diogo Abreu
	Fernando Calderaro
	Leticia Mota
	Rodrigo Oliveira
	Thailana Neves		
	
	exercicio 02		
	
	Faça um programa usando ponteiros, para ordenar 5 números e mostrá­-los ordenados na tela.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	float *vet;
	int i,j,temp;
	vet = NULL;
	
	vet = malloc (5 *sizeof(float));
	
	for(i=0;i<5;i++)
	{
		printf("insira o %do numero \n",(i+1));
		scanf("%f",&vet[i]);
	}
	
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(vet[i]>vet[j])
			{
				temp = vet[i];
				vet[i] = vet[j];
				vet[j] = temp;
			}
		}
	}
	
	for (i=0;i<5;i++)
	{
		printf("%do numero: %.2f \n",(i+1),vet[i]);
	}
	free(vet);
	return 0;
}
