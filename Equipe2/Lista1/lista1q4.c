/*
Equipe2
Hermann Hernani
Lucas Botinelly
Stephanny Barreto
*/
#include<stdio.h>

int main(){
	int tam, i, j, acm=0;
	printf("Qual o tamanho dos vetores ?\n");
	scanf("%d", &tam);
	int vet1[tam], vet2[tam], final[tam];
	// leitura dos vetores
	printf("Digite os valores do primero vetor: \n");
	for(i=0; i<tam;i++){
		scanf("%d", &vet1[i]);
	}
	printf("Digite os valores do segundo vetor: \n");
	for(j=0;j<tam; j++){
		scanf("%d", &vet2[j]);
	}
	//Calcula Produto escalar
	for(i=0; i<tam;i++){
		acm = vet1[i]*vet2[i];
		//printf("%d\n", acm);
		final[i] = acm;
		acm = 0;
	}
	//Impressão
	printf("Vetor do produto escalar\n");
	for(j=0; j<tam; j++){
		printf("%d\n", final[j]);
	}
	printf("\n");
	return 0;
}

