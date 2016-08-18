/*Equipe 4: 

  Jefferson Avilar
  Matheus Obando
  Fabíola Maciel
  Helder Serra

  7. Dada uma matriz real A com m linhas e n colunas e um vetor real V com n elementos, determinar o produto de A por V.

*/

#include <stdio.h>
#include <stdlib.h>

// Função usada para liberar memória
void **desaloca_matriz(int **matrix, int nrows);

int main()
{


  int **matrix_a,
      *xvector,
      *produto,
       nrows = 0,
       ncols = 0,
       tam; //Tamanho do vetor igual ao número de colunas;


  printf("Insira a quantidade de linhas da matriz: ");
  scanf("%d", &nrows);
  printf("Insira a quantidade de colunas da matriz: ");
  scanf("%d", &ncols);

  matrix_a = (int **) malloc(sizeof(int *) * nrows);

  for (int zx = 0; zx < nrows; zx++)
    {
      matrix_a[zx] = (int *) malloc(sizeof(int) * ncols);
    }


  for (int i = 0; i < nrows; i++)
    {
      for (int j = 0; j < ncols; j++)
        {
          printf("Insira o valor[%d][%d]: ", i, j);
          scanf("%d", &matrix_a[i][j]);
        }
    }

  xvector = (int *) malloc(sizeof(int) * ncols);
  tam = ncols; // Tamanho de vetor igual ao de colunas da matriz

  for (int x = 0; x < tam; x++)
    {
      printf("Insira o valor [%d]: ", x);
      scanf("%d", &xvector[x]);
    }

  produto = (int *) malloc(sizeof(int) * ncols);

  for (int i = 0; i < nrows; i++)
    {
      produto[i] = 0;
      for (int j = 0; j < ncols; j++)
        {
          /* 'produto[i] = 0' é usado para que ñ aconteça do produto
             da linha anterior seja acumulado na seguinte */
          produto[i] += matrix_a[i][j] * xvector[j];
        }
    }

  printf("\n***** Vetor Produto *****\n");

  for (int x = 0; x < tam; x++)
    {
      printf("%2d ", produto[x]);
    }

  printf("\n\n");

  // Libera memória
  desaloca_matriz(matrix_a, nrows);
  free(xvector);
  free(produto);

  return(0);
}


// Desaloca da memória o espaço antes utilizado
void **desaloca_matriz(int **matrix, int nrows)
{
  for (int i = 0; i < nrows; i++)
    {
      free(matrix[i]);
    }

  free(matrix);
}
