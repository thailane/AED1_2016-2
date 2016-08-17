/* equipe:
    Fabiana Bezerra
    Paulo Roberto
    Paulo Silveira
    Pedro Sena
    
*/

#include<stdio.h>
#include<stdlib.h>

#define MAX 5

int comparator(const void *a, const void *b)
{
    if(*(int*)a < *(int*)b) return -1;
    if(*(int*)a > *(int*)b) return 1;
    return 0;
}

int main()
{
    int *vetor = (int*) malloc (MAX*sizeof(int));
    int i,j;

    for(i=0;i<MAX;i++) scanf("%i",&vetor[i]);
    qsort(vetor, MAX, sizeof(int), comparator);

    for(i=0;i<MAX;i++) printf("%i ", vetor[i]);
    printf("\n");
    return 0;
}
