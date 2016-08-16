#include<stdio.h>

int main(){
	int tam, i, j, acm=0;
	printf("Qual o tamanho dos vet?\n");
	scanf("%d", &tam);
	int vet1[tam], vet2[tam], final[tam];
	printf("Digite os valores do primero vetor:\n");
	for(i=0; i<tam;i++){
		scanf("%d", &vet1[i]);
	}
	printf("Digite os valores do segundo vetor: \n");
	for(j=0;j<tam; j++){
		scanf("%d", &vet2[j]);
	}
	for(i=0; i<tam;i++){
		acm = vet1[i]*vet2[i];
		final[i] = acm;
		acm = 0;
	}
	printf("Vetor do produto escalar\n");
	for(j=0; j<tam; j++){
		printf("%d\n", final[j]);
	}
	printf("\n");
	return 0;
}