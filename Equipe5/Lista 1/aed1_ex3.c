/*
Aline Lima
Amanda Leticia
Eduardo Azevedo
Lucas Almeida
*/

//3. Dada uma seqüência de n números, imprimi-la na ordem inversa à da leitura. 
#include <stdio.h>
#define TAMMAX 100

int main() 
{
	int comprimento, i, v[TAMMAX];
	printf("Entre com o comprimento da sequencia: ");
	scanf("%d", &comprimento); 
	for (i = 0; i < comprimento; i++)
	{
		printf("\n Digite um valor para posicao %i do vetor: ",i+1);
		scanf("\n %d", &v[i]);
	}
	for (i = comprimento-1; i >= 0; i--)
		printf("%d ", v[i]);
	return 0;
}

