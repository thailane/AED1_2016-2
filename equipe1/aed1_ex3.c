/* equipe:
	rodrigo oliveira
	fernando calderaro
	thailana neves
	diogo abreu
	leticia mota		*/

//3. Dada uma seqüência de n números, imprimi-la na ordem inversa à da leitura

#include <stdio.h>

int main () {
    int n, i, vet[100];

    printf("Digite o comprimento da sequência: ");
    scanf("%d", &n);

    printf("Digite os %d valores da sequência: \n", n);

    for (i=0; i<n; i++){
        scanf("%d", &vet[i]);
    }

    for (i=n-1; i>=0; i--){
        printf("%d ", vet[i]);
    }
    return 0;
}
