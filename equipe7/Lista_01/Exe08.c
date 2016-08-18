#include<stdio.h>
#define MAX 50

int main()
{
    int linhas, colunas, i, j, repeticoes = 0, vetor[MAX][MAX];
    
// leitura da matriz
    printf("Numero de linhas: ");
    scanf("%d", &linhas);

    printf("Numero de colunas: ");
    scanf("%d", &colunas);

    printf("Digite os elementos da matriz: ");
    for(i = 0; i < linhas; i++)
        for(j = 0; j < colunas; j++)
            scanf("%d", &vetor[i][j]);

// logica da busca por repeticoes
    for(i = 0; i < linhas; i++)
    {
       for(j = 0; j < colunas; j++)
       {
            if(vetor[i][j] != vetor[i][j+1]);
            else
                repeticoes++;
       }
    }
// saida
    if(repeticoes != 0)
        printf("\nExistem repeticoes\n");
    else
        printf("\nNao existem repeticoes\n");
return 0;
}
