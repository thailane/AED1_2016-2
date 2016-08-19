/*
Equipe2
Hermann Hernani
Lucas Botinelly
Stephanny Barreto

*/
//6. Imprimir as n primeiras linhas do triângulo de Pascal
#include <stdio.h>
#include <stdlib.h>

void preencher(int n, int **T)
{

  int i,j;

  T[0][0] = 1;
  for (i = 1; i < n; i++) 
  {
    T[i][0] = 1;
    T[i][i] = 1;
    for (j = 1; j < i; j++) 
    {
      T[i][j] = T[i-1][j] + T[i-1][j-1];
    }
  }
}

//Imprime a Matriz
void imprimir(int n, int **T) 
{
  int i,j;

  for (i = 0; i < n; i++) 
  {
    for (j = 0; j <= i; j++) 
    {
      printf("%5d ", T[i][j]);
    }
    printf("\n");
  }
}


int main()
{
  int n,i,j,**T;

  printf("Quantos numeros do coiso de pascal? ");
  scanf("%d", &n);

  T = (int **) malloc(n*sizeof(int *));
  if (T == NULL) 
  {
    printf("Erow\n");
    return -1;
  }
  
  for (i = 0; i < n; i++) 
  {
    T[i] = (int *) malloc((i+1)*sizeof(int));
    
    if (T[i] == NULL) {
      printf("Erow\n");
      return -1;
    }
  }

  if (n <= 0) 
  {
    return 1;
  }

  preencher(n,T);
  imprimir(n,T);

  return 0;
}
