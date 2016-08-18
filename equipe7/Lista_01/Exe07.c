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
  float **matriz;
  float *vet, *vet_final;
  int lin, col, i, j;
  float prod, soma = 0;
  
  //Recebe as propriedades da matriz e do vetor
  printf("Digite o número de linhas da matriz: ");
  scanf("%i", &lin);
  printf("\nDigite o número de colunas da matriz: ");
  scanf("%i", &col);
  printf("\nO comprimento do vetor deve ser igual às colunas da matriz \n\n");
  
  //Criação da matriz pela alocação dinâmica; ela é preenchida a medida que é criada
  matriz=(float**)malloc(lin*sizeof(float*));
  printf("Digite os elementos da matriz: \n");
  
  for (i=0;i<lin;i++){
    matriz[i]=(float*)malloc(col*sizeof(float));
    for (j=0;j<col;j++) scanf("%f", &matriz[i][j]);
    printf("\n"); //Pula linha para indicar ao usuário mudança de linha
  }
  
  //Criação do vetor, também preenchido a medida que é criado
  vet=(float*)malloc(col*sizeof(float));
  printf("\nDigite os elementos do vetor: \n");
  for (i=0;i<col;i++) scanf("%f", &vet[i]);
  printf("\n");
  
  //Criação do vetor resultante
  vet_final=(float *)malloc(lin*sizeof(float));
  for(i=0;i<lin;i++){
    for(j=0;j<col;j++){
      
      
	  prod=matriz[i][j]*vet[j];
      soma+=prod;
      
      
    }
    vet_final[i] = soma;
    printf("%.2f ", vet_final[i]);//imprime o vetor a medida que é preenchido
    soma=0;
  }
  printf("\n");
  
  return 0; 
}
