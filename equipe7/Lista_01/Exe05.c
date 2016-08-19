/* equipe:
    Fabiana Bezerra
    Paulo Roberto
    Paulo Silveira
    Pedro Sena

    5.Dada uma seqüência de n números reais, determinar os números que compõem a seqüência e o número de vezes que cada um deles
    ocorre na mesma.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	float *sequencia, *ordenado;
	int n, i, j, fim, *vezes;
	fim=0;

	scanf("%i", &n);

	sequencia = (float*)malloc(n*sizeof(float));
	vezes = (int*)malloc(n*sizeof(int));
	ordenado = (float*)malloc(n*sizeof(float));

	for(i=0; i<n; i++) scanf("%f", &sequencia[i]);

	for(i=0; i<n; i++)
	{
	    //Verifica se esse valor é a primeira vez que aparece na sequência
	    for(j=i-1; j>=0; j--)
	    {
	        if(sequencia[j] == sequencia[i]) break;
        }
	    //Se for, adiciona ele no vetor ordenado e conta quantos tem depois dele e coloca no vezes
	    if(j<0){
	        ordenado[fim] = sequencia[i];
	        vezes[fim] = 1;
	        for(j=i+1; j<n; j++)
	        {
	            if(sequencia[j] == ordenado[fim])
	            {
	                vezes[fim]++;
	            }
	        }
	        fim++;
	    }
	}

	printf("Sequência: ");
	for(i=0; i<n-1; i++)
	{
	    printf("%.1f, ", sequencia[i]);
	}
	printf("%.1f\n", sequencia[i]);

	printf("Frequências:  ");
	for(i=0; i<fim; i++)
	{
	    printf("%.1f aparece %d vez(es)\n", ordenado[i], vezes[i]);
	}

	free(ordenado);
	free(sequencia);
	free(vezes);

	return 0;
}
