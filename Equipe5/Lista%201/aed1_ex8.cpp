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
	
	printf("Digite o numero de linhas: ");
  	scanf("%d", &linhas);
  	printf("Digite o numero de colunas: ");
  	scanf("%d", &colunas);

  	printf("\nValores da Matriz\n\n") ;
    for (i=0; i<linhas; i++) 
	{
    	for(j=0; j<colunas; j++) 
		{
        	printf("Digite um valor para [%d][%d]: ", (i+1), (j+1));
        	scanf("%d", &matriz[i][j]);
    	}
    }
    
    for (i=0; i<linhas; i++) 
	{
    	for (j=0; j<colunas; j++) 
		{
    		cont=0; // adiciona o valor 0 ao contador para comecar a contabilizar se vai ter numeros repetidos
        	for(k=0; k<linhas; k++)
	    	{
       			for(w=0; w<colunas; w++)
		    	{
       				if(matriz[i][j]==matriz[k][w])
			    	{
       					cont++;
       					if(cont>=2) // maior ou igual a dois porque o primeiro elemento vai ser sempre o mesmo
						{
       						printf("\nExistem valores repetidos!");
       						return(0); // se ouver valores repetidos encerra o programa sem a necessidade de continuar buscando mais valores repetidos
				    	}
			    	}
		    	}
	  		}
    	}
    }
    printf("\nNao existem valores repetidos!");

}
