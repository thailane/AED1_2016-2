
/*
Equipe2
Hermann Hernani
Lucas Botinelly
Stephanny Barreto

7. Dada uma matriz real A com m linhas e n colunas e um vetor real V com n elementos, determinar o produto de A por V. 

*/
#include<stdio.h>

int main()
{
    int i, l, c, j, acm;

    printf("linhas: \n");
    scanf("%d", &l);

    printf("colunas: \n");
    scanf("%d", &c);
    
    int matriz[l][c], vetor[c], valor, resultado[l][1];
    

    printf("Valores da matriz: \n");
    for(i=0; i<l;i++)
    {
        for(j=0; j<c;j++)
        {
            scanf("%d", &valor);
            matriz[i][j] = valor;
            valor = 0;        
        }
    }

    printf("Valores do vetor: \n");
    for(j=0; j<c;j++)
    {
        scanf("%d", &valor);
        vetor[j] = valor;
        valor = 0;    
    }
    
    for(i=0; i<l;i++)
    {
        for(j=0;j<c; j++)
        {
            acm = acm+(vetor[j] * matriz[i][j]);
        }            
        resultado[i][1] = acm;    
        acm = 0;
    }
    printf("Resultado: \n");
    for(j=0; j<l;j++)
    {
        printf("%d\n", resultado[j][1]);        
    }        

	return 0;
}
