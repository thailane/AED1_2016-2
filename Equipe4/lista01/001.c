/*Equipe 4: 

Helder Serra
Jefferson Avilar
Matheus Obando
Fabíola Maciel
Kauê Fontes

1. Reescreva o programa abaixo usando ponteiros
 
int main ()
{
float matrx [50][50]; int i,j;
for (i=0;i<50;i++)
for (j=0;j<50;j++) matrx[i][j]=0.0;
return(0); 
}	*/

		
#include<stdio.h>
#include<stdlib.h>
#define LINHA 50
#define COLUNA 50

int main()
{

  float **matriz;
  int i,j;


	matriz=(float**)calloc(LINHA,sizeof(float*)); //Aloca as linhas da matriz

  if(matriz==NULL)
    {
      printf("Erro: memoria insuficiente.");
      return (1);
    }

  for (i=0;i<50;i++)
    matriz[i]=(float*)calloc(COLUNA,sizeof(float)); //Aloca as colunas de cada linha da matriz

  if (matriz[i]==NULL)
    {
      printf("Erro: memoria insuficiente");
      return(1);
    }

//Inserindo os valores em todas as linhas e colunas da matriz:

  for (i=0;i<LINHA;i++){
    for (j=0;j<COLUNA;j++){
      matriz[i][j]=0.0;
    }
  }

  free(matriz);

  return 0;

}
