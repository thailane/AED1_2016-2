
/*
Equipe2
Hermann Hernani
Lucas Botinelly
Stephanny Barreto
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *v;
	int num;
	int i, k, aux;

	v = (int*)malloc(5 * sizeof(int));

	for (i=0;i<5;i++)
	{
		printf("Digite um valor para V[%d]: ",i);
		scanf("%d",v+i);

	}
	for (i=0;i<5;i++)
	{
		for(k=i+1;k<5;k++)
		{
			if(v[i] > v[k])
			{
				aux = v[i];
				v[i] = v[k];
				v[k] = aux;
			}
		}
	}
	for (i=0;i<5;i++)
	{
		printf("\nValor de V[%d] = %d",i, v[i]);
	}
	return 1;
}
