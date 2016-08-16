/*
6. Imprimir as n primeiras linhas do triângulo de Pascal
*/

#include <stdio.h>
#include <stdlib.h>

void preenche_tri(int n, int **xvector);
void imprime_tri(int n, int **xvector);

int main()
{

  int **xvector,
        n;

  printf("Insira a quantidade de lihas desejada: ");
  scanf("%d", &n);


  /* Alocando memória para a matriz */

  xvector = (int **) malloc (sizeof(int *) * n); //Aloca na memória espaço para as linhas da matriz

  for (int i = 0; i < n; i++)
    {
      xvector[i] = (int *) malloc (sizeof(int) * (i+1)); //Aloca na memória espaço para as colunas damatriz
    }

  // Caso a entrada seja menor ou igual a '0' o programa termina
  if(n<=0)
    {
      return(1);
    }

  preenche_tri(n, xvector);
  imprime_tri(n, xvector);

  return (0);
}


/*
  Recebe uma matriz triangular 'xvector' com numero 'n' de linhas
  e preenche suas linhas com o Triângulo de Pascal */

void preenche_tri(int n, int **xvector)
{
  // Pirmeira linha do triângulo recebe '1'
  xvector[0][0] = 1;

  for (int i = 0; i < n; i++)
    {
      // Adiciona '1' nas laterais do triângulo
      xvector[i][0] = 1;
      xvector[i][i] = 1;

      for (int j = 0; j < i; j++)
        {
          // Vai colocando os respectivos valores nas posições
          xvector[i][j] = xvector[i-1][j] + xvector[i-1][j-1]; 
        }
    }
}

/* Função que imprime a matriz como um Triângulo de Pascal */

void imprime_tri(int n, int **xvector)
{

  for (int i = 0; i < n; i++)
    {
      for (int j = 0; j <= i; j++)
        {
          // Imprime o valor com um pouco de espaço
          printf("%5d ", xvector[i][j]);
        }
      printf("\n");
    }
}

 
