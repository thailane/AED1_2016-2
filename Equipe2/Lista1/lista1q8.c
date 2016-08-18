#include<stdio.h>

int main()
{
    int l, c, i, j, k, m, bol=1;
    printf("Quantidade de linhas da matriz: ");
    scanf("%d", &l);
    printf("Quantidade de colunas da matriz: ");
    scanf("%d", &c);
    int matriz[l][c], copia[l][c], n;
    
    printf("Digite os valores da matriz: \n");
    for(i = 0; i<l;i++){
        for(j = 0; j<c;j++){
            scanf("%d", &n);
            matriz[i][j] = n;
            copia[i][j] = n;
        }
    }
	//Processamento
	
	for(i = 0; i<l;i++)
	{
        for(j = 0; j<c;j++)
        {
            for(k = 0; k<l;k++)
            {
                for(m = 0; m<c;m++)
                {
                    if (matriz[i][j] == copia[k][m])
                    {
                        bol = 0;    
                    } 
                    else{
                        bol = 1;
                    }
                }
            }
        }
    }
    if(bol == 0)
    {
        printf("Há elementos repetidos na matriz\n");
    }	
    else{    
        printf("Não há elementos repetidos na matriz\n");
    }
	return 0;
}
