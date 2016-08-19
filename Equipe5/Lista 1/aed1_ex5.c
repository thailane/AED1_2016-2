/*
Aline Lima
Amanda Leticia
Eduardo Azevedo
Lucas Almeida
*/

//5. Dada uma seqüência de n números reais, determinar os números que compõem a seqüência e o número de vezes que cada um deles ocorre na mesma.
#include <stdio.h>
#include <stdbool.h>
# define MAXSIZE 100
int main()
{
	int tam_vetor,cabecote=0;
	float aux;
	int i = 0,j =0;  //Contadores
	float vector[MAXSIZE],vetor_entrada[MAXSIZE];
	puts("Entre com o tamanho do vetor 'n': ");
	scanf("%d",&tam_vetor);
	puts("Entre com os valores do vetor: ");
	for(i=0;i<tam_vetor;i++)
	{
		scanf("%f",&aux);
		vetor_entrada[i]=aux;
		bool contains= false;
		for(j=0;j<cabecote;j++)
		{
			if(vector[j]==aux) 
			{
				contains= true;
			}
		}
		if(contains==false)
		{
			vector[cabecote]= aux;
			cabecote++;
		}
	}
	for(i=0;i<cabecote;i++)
	{
		int ContaOcorrencia=0;
		printf("%f",vector[i]);
		for(j=0;j<tam_vetor;j++)
			if(vector[i]== vetor_entrada[j]) ContaOcorrencia++;
		printf("-----Ocorre %d vez(es)\n",ContaOcorrencia);
	}
	return 0;
}
