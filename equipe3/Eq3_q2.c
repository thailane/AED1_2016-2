//Equipe3
//Alerrandro Barreto
//Elisandra Oliveira
//Frank N�polis
//Thiago Cauassa
//Caique Martins
	
//2. Fa�a um programa usando ponteiros, para ordenar 5 numeros e mostra�los ordenados na tela.
// (ordem crescente)

#include <stdio.h>
#include <stdlib.h>

int main() 
{
 int *pont, i, j,aux; // variavel pont declarada como ponteiro
 pont = (int*)malloc(sizeof(int)*5);// aloca a memoria necessaria no ponteiro
 
 if(pont == NULL )//testa se a memoria foi corretamente alocada
    {
        printf("N�o foi possivel alocar memoria");
    }
    //recebe os valores
 for(i=0;i < 5;i++)
 {
  printf("Informe um dos 5 valores numericos\n");
  scanf("%i",(pont+i));
 }
 //estrutura de ordena��o com la�os for 
 for(i=0;i <5; i++)
 {
  for(j=0; j< 5; j++)
  {
   //faz a compara�ao do ponteiro com valor i e com valor j
     if(*(pont+i) < *(pont+j))
	 {
      //troca as variaveis de lugar
       aux = *(pont+i);
       *(pont+i) = *(pont+j);
       *(pont+j) = aux;
     } 
  }
  
 }
 //imprime o la�o for
 printf("\n\n\n\n============\n\n\n");
  for(i=0;i < 5;i++){
  printf("%i\n",*(pont+i));
 
 }
 
 return 0;
}
