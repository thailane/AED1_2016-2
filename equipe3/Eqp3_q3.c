//Equipe3
//Alerrandro Barreto
//Elisandra Oliveira
//Frank N�polis
//Thiago Cauassa
//Caique Martins


//Lista 1 - Revis�o
//Quest�o 3 - (Vetor)Dada uma seq��ncia de n n�meros, imprimi-la
//na ordem inversa � da leitura.


#include <stdio.h>
#define MAX 100

int main() 
{
  int n, i, v[MAX];

  printf("Dado um vetor, digite a quantidade de elementos: ");
  scanf("%d", &n);

  printf("\nDigite uma sequencia com %d numeros inteiros: \n\n", n);
  for (i = 0; i < n; i++)
  {
    scanf("%d", &v[i]);
  }
  printf("\nImprimindo o Vetor em ordem inversa:\n\n");
  for (i = n-1; i >= 0; i--)
    printf("%d ", v[i]);
  printf("\n");
  return 0;
}


