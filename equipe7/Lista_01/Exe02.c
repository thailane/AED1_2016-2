/* equipe:
    Fabiana Bezerra
    Paulo Roberto
    Paulo Silveira
    Pedro Sena

    2. Faça um programa usando ponteiros, para ordenar 5 números e mostrá-los ordenados na tela.
*/

#include<stdio.h>
#include<stdlib.h>

#define MAX 5

//Função que ensina ao qsort como ordenar, função necessária
int comparator(const void *val1, const void *val2)
{
    if(*(int*)val1 < *(int*)val2) return -1;
    if(*(int*)val1 > *(int*)val2) return 1;
    return 0;
}

int main()
{
    //Inicialização
    int *vetor = (int*) malloc (MAX*sizeof(int));
    int i,j;

    //Recebe os números
    printf("Digite os números do vetor: \n");
    for(i=0;i<MAX;i++) scanf("%i",&vetor[i]);

    //Ordena
    qsort(vetor, MAX, sizeof(int), comparator); //qsort (<vetor a ser ordenado>, <tam>, <tipo valor>, <comparador>)

    //Ipmrime
    for(i=0;i<MAX;i++) printf("%i ", vetor[i]);
    printf("\n");

    //libera a memória
    free(vetor);
    return 0;
}
