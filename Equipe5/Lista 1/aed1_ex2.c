/*
	Aline Lima
	Amanda Leticia
	Eduardo Azevedo
	Lucas Almeida

2. Faça um programa usando ponteiros, para ordenar 5 números e mostrá­-los ordenados na tela.

*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int vetor[5], *p, i, j, aux;
	p=vetor;
	
	//Preenchimento do vetor usando ponteiro
	for(i=0;i<5;i++)
	{
		printf("\n Digite um valor para posicao %i: ", i+1);
		scanf("%i", p+i);
	}
	
	//Ordenação
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(p[i]>=p[j])
			{
				aux=vetor[i];
				vetor[i]=vetor[j];
				vetor[j]=aux;
			}
			
		}
		
	}
	for(i=0;i<5;i++)
	{
		printf("\n Posicao %i: %i", i+1, p[i]);
	}	
}
