/*Equipe 4: 

  Jefferson Avilar
  Matheus Obando
  Fabíola Maciel
  Helder Serra
  Kaue Fontes

  4.  Dados dois vetores x e y, ambos com n elementos, determinar o produto escalar desses vetores.
*/

#include<stdio.h>
#include <stdlib.h>

int main(){

  int
    *v1,
    *v2,
    tam,
    escalar = 0;

  // Recebe o tamanho dos vetores
  printf("Insira o tamanho dos vetores: ");
  scanf("%d", &tam);

  // Aloca os vetores
  v1 = (int *) malloc(sizeof(int) * tam); 
  v2 = (int *) malloc(sizeof(int) * tam); 

  /* Adiciona valores aos vatores */
  for (int i = 0; i < tam; i++)
    {
      printf("Insira o valor [%d] no vetor '1': ", i+1);
      scanf("%d", &v1[i]);
    }

  printf("\n");

  // ...
  for (int j = 0; j < tam; j++)
    {
      printf("Insira o valor [%d] no vetor '2': ", j+1);
      scanf("%d", &v2[j]);
    }

  
  // Faz o calculo do produto escalar entre os vetores
  for(int x = 0; x < tam; x++)
    {
      escalar += (v1[x] * v2[x]);
    }

  // Imprime o resultado final da operação
  printf("\nO produto escalar entre os dois vetores é = %d\n", escalar);
  
	return 0;
}
