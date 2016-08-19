/* equipe 01:
	Diogo Abreu
	Fernando Calderaro
	Leticia Mota
	Rodrigo Oliveira
	Thailana Neves	

	exercicio 04

	Dados dois vetores x e y, ambos com n elementos, determinar o produto escalar desses vetores.
*/

#include <stdio.h>

int main () {
	int i, n;
	float produtoe, vet_x[10], vet_y[10];

	produtoe = 0;

	printf("Digite o tamanho dos vetores: ");
	scanf("%d", &n);

	//lê os elementos do vetor x
	printf("Digite os componentes do vetor x:\n ");
	for (i=0; i<n; i++)
	{
		scanf("%f", &vet_x[i]);
	}

	//lê os elementos do vetor y
	printf("Digite os componentes do vetor y:\n ");
	for (i=0; i<n; i++)
	{
		scanf("%f", &vet_y[i]);
	}

	for (i=0; i<n; i++)
	{
		produtoe = produtoe + vet_x[i] * vet_y[i]; //cálculo do produto escalar
	}

	printf("O produto escalar desses vetores é %.2f", produtoe);
	return 0;
}
