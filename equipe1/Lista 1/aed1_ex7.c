//7. Dada uma matriz real A com m linhas e n colunas e um vetor real V com n elementos, determinar o produto de A por V.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *vetor ;
    int *vetorproduto;
    int **matriz ;
    int i ,j ,m ,n ,x ;
    int soma = 0;

    //entrada de dados
    printf("- O produto de uma matriz de tamanho mxn com um vetro de tamanho n - \n");
    printf("Informe o numero de linhas da matriz: \n");
    scanf("%d",&m);
    printf("Informe o numero de colunas da matriz: \n");
    scanf("%d",&n);
    printf("O vetor terá %d elementos! \n",n);

    //cria um vetor com alocação dinamica
    vetor = (int *)malloc(n * sizeof(int));
    printf("Informe os %d elementos do vetor: \n",n);
    for(i=0;i<n;i++)//preenche o vetor
    {
        scanf("%d",&vetor[i]);
    }
    printf("vetor : \n");
    for(i=0;i<n;i++)//imprime o vetor
    {
        printf("%d  ",vetor[i]);
    }
    printf("\n");

    //cria uma matriz com alocação dinamica
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

    //cria um vetorproduto com alocação dinamica
    printf("O produto da matriz com o vetor é igual a matriz: \n");
    vetorproduto = (int *)malloc(m * sizeof(int));
    for(i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            x = matriz[i][j] * vetor[j];
            soma = soma + x;
        }
        vetorproduto[i] = soma;//preenche o vetorproduto com o produto da matriz com o vetor
        printf("%d\n",vetorproduto[i]);//imprime o vetor
        soma = 0;
    }
    printf("\n");

    return 0;

}
