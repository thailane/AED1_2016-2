/*
Aline Lima
Amanda Leticia
Eduardo Azevedo
Lucas Almeida
*/
#include <stdio.h>
#define TAMMAX 100

main() 
{
  int n, i, v[TAMMAX];

  printf("Digite o comprimento da sequencia: ");
  scanf("%d", &n);

  
  for (i = 0; i < n; i++)
  {

		printf("\n Digte um valor para posicao %i do vetor: ",i+1);
		scanf("\n %d", &v[i]);
	}
	
  for (i = n-1; i >= 0; i--)
  	printf("%d ", v[i]);
}

