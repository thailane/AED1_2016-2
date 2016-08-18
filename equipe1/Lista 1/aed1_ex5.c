/* equipe 01:
	Diogo Abreu
	Fernando Calderaro
	Leticia Mota
	Rodrigo Oliveira
	Thailana Neves	

	exercicio 05

	Dada uma seqüência de n números reais, determinar os números que compõem a seqüência e o número de vezes
	que cada um deles ocorre na mesma.

	Exemplo: n = 8
	Seqüência: -1.7, 3.0, 0.0, 1.5, 0.0, -1.7, 2.3, -1,7
	Saída: -1.7 ocorre 3 vezes
	3.0 ocorre 1 vez
	0.0 ocorre 2 vezes
	1.5 ocorre 1 vez
	2.3 ocorre 1 vez
*/

#include <stdio.h>

int main () {
	int n, i, j, vezes;
	float vet[100];

	printf("Digite o tamanho da sequência: ");
	scanf("%d", &n);
	printf("Digite os %d números reais da sequência: ", n);
	for (i=0; i<n; i++)
	{
		scanf("%f", &vet[i]);
	}

	for (i=0; i<n; i++)
	{
		vezes = 1;
		j = i + 1;
	while (j < n)
		if (vet[j] != vet[i])
			j++;
		else
		{
			vezes++;
			n--;
			vet[j] = vet[n];
		}
		if (vezes == 1)
			printf("%.2f ocorre %d vez\n", vet[i], vezes);
		else
			printf("%.2f ocorre %d vezes\n", vet[i], vezes);
 	}
	return 0;
}
