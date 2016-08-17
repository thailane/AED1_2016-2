#include <stdio.h>


int main()
{
	int TAM,i,j;
	int vetx[TAM],vety[TAM];
	int vetF[TAM];
	
	printf("Digite o Tamanho do Vetor:");
	scanf("%d",&TAM);
	
	for(i=0;i<TAM;i++)
	{
		printf("Digite o Valores do Vetor x");
		scanf("%d",&vetx[i]);
	}
	
	for(j=0;j<TAM;j++)
	{
		printf("Digite o Valores do Vetor y");
		scanf("%d",&vety[j]);
	} 
	
	for(i=0;i<TAM;i++)
	{
		vetF[i] = vetx[i]*vety[i];
	}
	
	for(int i=0;i<TAM;i++)
	{
		printf("O Valores escalares dos vetores são:%d",vetF[i]);
		printf("\n");

	}
	
	
}
