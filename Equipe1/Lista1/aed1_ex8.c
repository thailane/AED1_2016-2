/* equipe:
	rodrigo oliveira
	fernando calderaro
	thailana neves
	diogo abreu
	leticia mota		*/


//8. Dada uma matriz real Amxn, verificar se existem elementos repetidos em A.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **matriz ;
    int i ,j ,u ,v ,linhas ,colunas ;
    int numero_de_repeticoes = 0;

    //entrada de dados
    printf("- O produto de uma matriz de tamanho mxn com um vetor de tamanho n - \n");
    printf("Informe o numero de linhas da matriz: \n");
    scanf("%d",&linhas);
    printf("Informe o numero de colunas da matriz: \n");
    scanf("%d",&colunas);
    printf("\n");

    //matriz com alocação dinamica
    matriz = (int **)malloc(linhas * sizeof(int*));
    for(i=0;i<linhas;i++)
    {
        matriz[i] = (int *)malloc(colunas * sizeof(int));
        printf("Informe os %d elementos da %d linha da matriz: \n",colunas,(i+1));
        for(j=0;j<colunas;j++)
        {
            scanf("%d",&matriz[i][j]);//preenche a matriz
        }

    }
    
    //imprime a matriz
    printf("Matriz: \n");
    for(i=0;i<linhas;i++)//imprime a matriz
    {
        for(j=0;j<colunas;j++)
        {
            printf("%d  ",matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for(u=0;u<linhas;u++)//compara cada elemento da matriz com todos os demais elementos
    {
        for(v=0;v<colunas;v++)
        {
            for(i=0;i<linhas;i++)
            {
                for(j=0;j<colunas;j++)
                {
                    if(matriz[u][v] == matriz[i][j])
                    {
                        numero_de_repeticoes = numero_de_repeticoes + 1;//conta quantas vezes o numero repetiu
                    }
                }
            }
      
            //se o valor de x, que foi inicializado como zero, se alterar quer dizer que o numero se repetiu na matriz
            if(numero_de_repeticoes != 0)
            {
                printf("o numero %d repete %d vezes \n",matriz[u][v],numero_de_repeticoes);
            }
            numero_de_repeticoes = 0;
        }
    }

}
