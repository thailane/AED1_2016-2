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
    int i ,j ,u ,v ,m ,n ;
    int x = 0;

    //entrada de dados
    printf("- O produto de uma matriz de tamanho mxn com um vetro de tamanho n - \n");
    printf("Informe o numero de linhas da matriz: \n");
    scanf("%d",&m);
    printf("Informe o numero de colunas da matriz: \n");
    scanf("%d",&n);
    printf("\n");

    //matriz com alocação dinamica
    matriz = (int **)malloc(m * sizeof(int*));
    for(i=0;i<m;i++)
    {
        matriz[i] = (int *)malloc(n * sizeof(int));
        printf("Informe os %d elementos da %d linha da matriz: \n",n,(i+1));
        for(j=0;j<n;j++)
        {
            scanf("%d",&matriz[i][j]);//preenche a matriz
        }

    }
    
    //imprime a matriz
    printf("Matriz: \n");
    for(i=0;i<m;i++)//imprime a matriz
    {
        for(j=0;j<n;j++)
        {
            printf("%d  ",matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for(u=0;u<m;u++)//compara cada elemento da matriz com todos os demais elementos
    {
        for(v=0;v<n;v++)
        {
            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                {
                    if(matriz[u][v] == matriz[i][j])
                    {
                        x = x + 1;//conta quantas vezes o numero repetiu
                    }
                }
            }
      
            //se o valor de x, que foi inicializado como zero, se alterar quer dizer que o numero se repetiu na matriz
            if(x != 0)
            {
                printf("o numero %d repete %d vezes \n",matriz[u][v],x);
            }
            x = 0;
        }
    }

}