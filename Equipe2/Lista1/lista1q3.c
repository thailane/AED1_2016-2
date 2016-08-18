/*
Equipe2
Hermann Hernani
Lucas Botinelly
Stephanny Barreto


3. Dada uma seqüência de n números, imprimi-la na ordem inversa à da leitura

*/
#include<stdio.h>

int main()
{
	int tam, i, j, cont=0;
	scanf("%d", &tam);
	int vet[tam], final[tam];
	for(i=0; i<tam;i++)
	{
		scanf("%d", &vet[i]);
	}
	for(j=tam-1;j>=0;j--)
	{
		final[cont]=vet[j];
		cont++;
	}

	
	printf("Antes da inversão: ");
	for(i=0;i<tam;i++)
	{
		printf("%d", vet[i]);
	}
	printf("\nDepois da inversão: ");
	for(j=0; j<tam;j++)
	{
		printf("%d", final[j]);
	}
	printf("\n");
	return 0;
}
