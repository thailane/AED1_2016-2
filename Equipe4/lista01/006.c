/*Equipe 4: 

  Jefferson Avilar
  Matheus Obando
  Fabíola Maciel

  6. Imprimir as n primeiras linhas do triângulo de Pascal

*/

#include <stdio.h>
#include <stdlib.h>

void preenche_tri(int n, int **xvector);

int main()
{

  int **xvector,
        n;

  printf("Insira a quantidade de lihas desejada, maior que 0 (zero): ");
  scanf("%d", &n);


  /* Alocando memória para a matriz */

  xvector = (int **) malloc (sizeof(int *) * n); //Aloca na memória espaço para as linhas da matriz

  for (int i = 0; i < n; i++)
    {
      xvector[i] = (int *) malloc (sizeof(int) * (i+1)); //Aloca na memória espaço para as colunas damatriz
    }

  // Chama a função que gera o triângulo de pascal
  preenche_tri(n, xvector);

  // Imprime o triângulo
  for (int i = 0; i < n; i++)
    {
      for (int j = 0; j <= i; j++)
        {
          // Imprime o valor com um pouco de espaço
          printf("%5d ", xvector[i][j]);
        }
      printf("\n");
    }

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
