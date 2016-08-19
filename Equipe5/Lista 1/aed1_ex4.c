/*
	Aline Lima
	Amanda Leticia
	Eduardo Azevedo
	Lucas Almeida

4. Dados dois vetores x e y, ambos com n elementos, determinar o produto escalar desses vetores.

*/

#include<stdio.h>
#include<stdlib.h>
#define TAM 15

int main()
{
	int vetor[TAM], vetor2[TAM], produto=0, i, tamVet;
	
	printf("Digite o tamanho dos vetores: ");
	scanf("%i", &tamVet);
	
	//Preenchimento do vetor 1
	for(i=0;i<tamVet;i++)
	{
		printf("\n Digite um numero para a posicao %i do primeiro vetor: ", i+1);
		scanf("%i", &vetor[i]);
	}
	
	//Preenchimento do vetor 2
	for(i=0;i<tamVet;i++)
	{
		printf("\n Digite um numero para a posicao %i do segundo vetor: ", i+1);
		scanf("%i", &vetor2[i]);
	}
	
	//Multiplicação dos vetores
	for(i=0;i<tamVet;i++)
	{
		produto = produto + vetor[i]*vetor2[i];
	}
	
	printf("\n\n		Produto escalar dos vetores:\n");
	printf(" %i ", produto);
}
