/*
Equipe2
Hermann Hernani
Lucas Botinelly
Stephanny Barreto
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc,char* argv[]){
	
	int tamVet;
	int i;
	int j;
	int posicaoCont = 0;
	int contQuant;
	int temNaLista = 1;//bool
	//0 = false
	//1 = true
	
	printf("Informe o tamanho da lista: ");
	scanf("%d", &tamVet);
	
	float numVet[tamVet];
	float numNaoRepetidos[tamVet];
	printf("\n");
	for(i = 0; i < tamVet; i++){
		printf("Elemento numero %d: ", i + 1);
		scanf("%f", &numVet[i]);
	}
	
	for(i = 0; i < tamVet; i++){
		temNaLista = 1;
		for(j = 0; j < tamVet; j++){
			if(numVet[i] == numNaoRepetidos[j]){
				temNaLista = 0;
			}
		}
		if(temNaLista == 1){
			numNaoRepetidos[posicaoCont] = numVet[i];
			posicaoCont++;
		}
	}
	
	printf("\n");
	for(i = 0; i < posicaoCont; i++){
		contQuant = 0;
		for(j = 0; j < tamVet; j++){
			if(numNaoRepetidos[i] == numVet[j]){
				contQuant++;
			}
		}
		if(contQuant > 1){
			printf("%.1f aparece %d vezes\n", numNaoRepetidos[i], contQuant);
		}
		else{
			printf("%.1f aparece %d vez\n", numNaoRepetidos[i], contQuant);
		}
		
	}
}
