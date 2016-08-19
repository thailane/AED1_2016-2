/*
Equipe2
Hermann Hernani
Lucas Botinelly
Stephanny Barreto


5. Dada uma seqüência de n números reais, determinar os números que compõem a seqüência e o número de vezes que cada um deles ocorre na mesma.

Exemplo: n = 8
Seqüência: -1.7,  3.0,  0.0,  1.5,  0.0, -1.7,  2.3, -1,7
Saída:       -1.7 ocorre 3 vezes 
                   3.0 ocorre 1 vez 
                   0.0 ocorre 2 vezes 
                   1.5 ocorre 1 vez 
                   2.3 ocorre 1 vez

*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc,char* argv[])
{
	
	int tamVet;
	int i;
	int j;
	int posicaoCont = 0;
	int contQuant;
	int temNaLista = 1;//bool
	//0 = false
	//1 = true
	
	printf("Informe o tamanho da lista: ");
	scanf("%d", &tamVet);
	
	float numVet[tamVet];
	float numNaoRepetidos[tamVet];
	printf("\n");
	for(i = 0; i < tamVet; i++)
	{
		printf("Elemento numero %d: ", i + 1);
		scanf("%f", &numVet[i]);
	}
	
	for(i = 0; i < tamVet; i++)
	{
		temNaLista = 1;
		for(j = 0; j < tamVet; j++)
		{
			if(numVet[i] == numNaoRepetidos[j])
			{
				temNaLista = 0;
			}
		}
		if(temNaLista == 1)
		{
			numNaoRepetidos[posicaoCont] = numVet[i];
			posicaoCont++;
		}
	}
	
	printf("\n");
	for(i = 0; i < posicaoCont; i++)
	{
		contQuant = 0;
		for(j = 0; j < tamVet; j++)
		{
			if(numNaoRepetidos[i] == numVet[j])
			{
				contQuant++;
			}
		}
		if(contQuant > 1)
		{
			printf("%.1f aparece %d vezes\n", numNaoRepetidos[i], contQuant);
		}
		else
		{
			printf("%.1f aparece %d vez\n", numNaoRepetidos[i], contQuant);
		}
		
	}
}
