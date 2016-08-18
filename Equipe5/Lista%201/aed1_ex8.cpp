/*

Aline Lima
Amanda Leticia
Eduardo Azevedo
Lucas Almeida

8.  Dada uma matriz real  Amxn, verificar se existem elementos repetidos em A.

*/

#include<stdio.h>
#define MAX 100

int main()
{
	int linhas, colunas, i, j, k, w, cont, matriz[MAX][MAX];
	
	printf("\nMatriz \n");
	printf("\nDigite o numero de linhas...: ");
  	scanf("%d", &linhas);
  	printf("Digite o numero de colunas..: ");
  	scanf("%d", &colunas);

  	printf("\nValores da Matriz\n\n") ;
    for (i=0; i<linhas; i++) 
	{
    	for(j=0; j<colunas; j++) 
		{
        	printf("Digite um valor para [%d][%d].: ", (i+1), (j+1));
        	scanf("%d", &matriz[i][j]);
    	}
    }
    
    for (i=0; i<linhas; i++) 
	{
    	for (j=0; j<colunas; j++) 
		{
    		cont=0;
        	for(k=0; k<linhas; k++)
	    	{
       			for(w=0; w<colunas; w++)
		    	{
       				if(matriz[i][j]==matriz[k][w])
			    	{
       					cont++;
       					if(cont>=2)
						{
       						printf("\nExistem valores repetidos!");
       						return(0);
				    	}
			    	}
		    	}
	  		}
    	}
    }
    printf("\nNao existem valores repetidos!");

}
