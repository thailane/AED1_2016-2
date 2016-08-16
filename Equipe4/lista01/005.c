#include <stdio.h>
#include <stdlib.h>

int main()
{

  float *v;
  int n;

  // Pergunta o tamanho do vetor
  printf("Insira o tamanho do vetor: ");
  scanf("%d", &n);

  // Aloca o vetor
  v = (float *)malloc(sizeof(float) * n);

  // Recebe os respectivos valores
  for (int i = 0; i < n; i++)
    {
      printf("Insira o [%d] valor: ", i);
      scanf("%f", &v[i]);
    }

  printf("\n");

  // Variável usada para contar as repetições
  int count;

  for(int z = 0; z < n; z++)
    {

      count = 0;

      for (int x = 0; x < n; x++)
          {
            if (v[z]==v[x])
              {
                if (x < z)
                  {
                    // Verificação ja feita anteriormente
                    break;
                  }
                // Contador é incrementado
                count++;
              }
          }
      
      if (count > 0)
        {
          // Se o contador for maior que zero há algo a ser impresso
          printf("%.1f ocorre %d vezes\n", v[z],count);
        }
    }

  printf("\n");

  // Libera o vetor
  free(v);

  return (0);
}


