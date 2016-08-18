/* equipe:
    Fabiana Bezerra
    Paulo Roberto
    Paulo Silveira
    Pedro Sena
	
	8.  Dada uma matriz real  Amxn, verificar se existem elementos repetidos em A.
*/

#include<stdio.h>
#include<stdlib.h>
#define MAX 50

int comparador(const void *val1, const void *val2){
	if ( *(int*)val1 < *(int*)val2 ) return -1;
	if ( *(int*)val1 > *(int*)val2 ) return 1;
	return 0;
}

int main()
{
	float **a, *vetor;
    int linhas, colunas, i, j, repeticoes = 0, pos=0, pro;
    
// leitura da matriz
    printf("Numero de linhas: ");
    scanf("%d", &linhas);

    printf("Numero de colunas: ");
    scanf("%d", &colunas);
	
	pro = colunas*linhas;
	
	vetor = (float*) malloc (sizeof(float) * pro);
	
	a = (float**) malloc (sizeof(float*) * linhas);
	
    printf("Digite os elementos da matriz: ");
    for(i = 0; i < linhas; i++){
    	a[i] = (float*) malloc (sizeof(float) * colunas);
        for(j = 0; j < colunas; j++){
        	scanf("%f", &a[i][j]);
        	vetor[pos++] = a[i][j];
		}
	}
	
    qsort(vetor, pro, sizeof(float), comparador);

// logica da busca por repeticoes
	
	pos = 0;    
	while( (vetor[pos] != vetor[pos+1]) && (pos++ < pro) );
    
// saida
    
	if(pos < pro)
    	printf("\nExistem repeticoes\n");
    else
        printf("\nNao existem repeticoes\n");
    
    free(a);
    free(vetor);
	
	return 0;
}
