/* equipe:
	rodrigo oliveira
	fernando calderaro
	thailana neves
	diogo abreu
	leticia mota		*/

//4. Dados dois vetores x e y, ambos com n elementos, determinar o produto escalar desses vetores.

#include <stdio.h>

int main () {
    int i, n;
    float produtoe, vetx[10], vety[10];

    produtoe = 0;

    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &n);

    printf("Digite os componentes do vetor x: ");
    for (i=0; i<n; i++) {
        scanf("%f", &vetx[i]);
    }

    printf("Digite os componentes do vetor y: ");
    for (i=0; i<n; i++) {
        scanf("%f", &vety[i]);
    }

    for (i=0; i<n; i++) {
        produtoe = produtoe + vetx[i] * vety[i]; //cálculo do produto escalar
    }

    printf("O produto escalar desses vetores é %.2f", produtoe);
    return 0;
}
