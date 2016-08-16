#include <stdio.h>
#include <stdlib.h>

void inverte_vetor(int *vetor, int tam_vetor);

int main()
{

  int *v,
       tam;

  printf("Insira o tamanho do vetor: ");
  scanf("%d", &tam);

  v = (int *) malloc(sizeof(int) * tam);

  for (int x = 0; x < tam; x++)
    {
      printf("Insira os elementos no vetor(array): ");
      scanf("%d", &v[x]);

    }

  inverte_vetor(v,tam);

  for (int x = 0; x < tam; x++)
    {
      printf("%d ", v[x]);

    }

  free(v);

  printf("\n");

  return(0);
}


void inverte_vetor(int *vetor, int tam_vetor)
{

  int aux, fim = tam_vetor;

  for (int i = 0; i < tam_vetor / 2; i++)
    {
      aux = vetor[i];
      vetor[i] = vetor[fim - i - 1];
      vetor[fim - i - 1] = aux;
    }
}
