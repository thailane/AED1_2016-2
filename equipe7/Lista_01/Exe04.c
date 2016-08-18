/* equipe:
    Fabiana Bezerra
    Paulo Roberto
    Paulo Silveira
    Pedro Sena

    4.  Dados dois vetores x e y, ambos com n elementos, determinar o produto escalar desses vetores.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	float *x, *y, cont=0;
	int n, i;

	scanf("%d", &n);
	x = (float*)malloc(n*sizeof(float));
	y = (float*)malloc(n*sizeof(float));

	for(i=0; i<n; i++){
	    scanf("%f", &x[i]);
	}

	for(i=0; i<n; i++){
	    scanf("%f", &y[i]);
	    cont += x[i]*y[i];
	}

	printf("%.2f\n", cont);

	return 0;
}
