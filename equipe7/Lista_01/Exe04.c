/* equipe:
    Fabiana Bezerra
    Paulo Roberto
    Paulo Silveira
    Pedro Sena
    
    4.Dados dois vetores x e y, determinar o produto escalar desses vetores.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *x, *y;
	int n, i, cont=0;

	scanf("%d", &n);
	x = (int*)malloc(n*sizeof(int));
	y = (int*)malloc(n*sizeof(int));

	for(i=0; i<n; i++){
	    scanf("%d", &x[i]);
	}

	for(i=0; i<n; i++){
	    scanf("%d", &y[i]);
	    cont += x[i]*y[i];
	}

	printf("%d", cont);

	return 0;
}
