/* equipe:
	rodrigo oliveira
	fernando calderaro
	thailana neves
	diogo abreu
	leticia mota		*/

//7. Dada uma matriz real A com m linhas e n colunas e um vetor real V com n elementos, determinar o produto de A por V.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *vetor ;
    int *vetorproduto;
    int **matriz ;
    int i ,j ,n , linhas ,colunas ,produto ;
    int soma_dos_produtos = 0;

    //entrada de dados
    printf("- O produto de uma matriz de tamanho mxn com um vetro de tamanho n - \n");
    printf("Informe o numero de linhas da matriz: \n");
    scanf("%d",&linhas);
    printf("Informe o numero de colunas da matriz: \n");
    scanf("%d",&colunas);
    printf("\nO vetor terá o numero de elementos igual ao numero da coluna da matriz! \n",n);

    //cria um vetor com alocação dinamica
    vetor = (int *)malloc(colunas * sizeof(int));
    printf("Informe os %d elementos do vetor: \n",colunas);
    for(i=0;i<colunas;i++)//preenche o vetor
    {
        scanf("%d",&vetor[i]);
    }
    printf("vetor : \n");
    for(i=0;i<colunas;i++)//imprime o vetor
    {
        printf("%d  ",vetor[i]);
    }
    printf("\n");

    //cria uma matriz com alocação dinamica
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

    //cria um vetorproduto com alocação dinamica
    printf("O produto da matriz com o vetor é igual a matriz: \n");
    vetorproduto = (int *)malloc(linhas * sizeof(int));
    for(i=0;i<linhas;i++)
    {
        for (j=0;j<colunas;j++)
        {
            produto = matriz[i][j] * vetor[j];
            soma_dos_produtos = soma_dos_produtos + produto;
        }
        vetorproduto[i] = soma_dos_produtos;//preenche o vetorproduto com o produto da matriz com o vetor
        printf("%d\n",vetorproduto[i]);//imprime o vetor
        soma_dos_produtos = 0;
    }
    printf("\n");

    return 0;

}
