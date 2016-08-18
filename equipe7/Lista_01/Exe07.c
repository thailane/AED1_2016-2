/* equipe:
    Fabiana Bezerra
    Paulo Roberto
    Paulo Silveira
    Pedro Sena
    
   7. Dada uma matriz real A com m linhas e n colunas e um vetor real V com n elementos, determinar o produto de A por V.
*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
  int **matriz;
  int *vet, *vet_final;
  int lin, col;
  int prod, soma = 0;
  
  //Recebe as propriedades da matriz e do vetor
  printf("Digite o número de linhas da matriz: ");
  scanf("%d", &lin);
  printf("\nDigite o número de colunas da matriz: ");
  scanf("%d", &col);
  printf("\nO comprimento do vetor deve ser igual ao valor do número de colunas da matriz ")
  
  //Criação da matriz pela alocação dinâmica; ela é preenchida a medida que é criada
  matriz=(int **)malloc(lin*sizeof(int*));
  printf("Digite os elementos da matriz: \n");
  for (i=0;i<lin;i++)
  {
    matriz[i]=(int *)malloc(col*sizeof(int));
    for (j=0;j<col;j++) scanf("%d", &matriz[i][j]);
    printf("\n"); //Pula linha para indicar ao usuário mudança de linha
  }
  
  //Criação do vetor, também preenchido a medida que é criado
  vet=(int *)malloc(col*sizeof(int));
  printf("Digite os elementos do vetor: \n");
  for (i=0;i<col;i++) scanf("%d", &vet[i]);
  printf("\n");
  
  //Criação do vetor resultante
  vet_final=(int *)malloc(lin*sizeof(inf));
  for(i=0;i<lin;i++)
  {
    for(j=0;j<col;j++)
    {
      prod=matriz[i][j]*vet[j];
      soma=soma+prod;
    }
    vet_final[j]=soma;
    soma=0;
  }
  printf("\n");
  
  //imprime o vetor
  for(i=0;i<lin;i++) printf("%d ", &vet_final[i]);
  
  return 0; 
}
