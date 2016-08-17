/*
Equipe2
Hermann Hernani
Lucas Botinelly
Stephanny Barreto
*/

#include <stdio.h>
#define MAX 100

int main() 
{ 
	int n, i, j, conta[MAX], comp = 0; 
	float seq[MAX];
	
	printf("Digite o tamanho da sequencia");
	scanf("%d", &n);
	
	printf("Sequencia de %d numeros reais", n);	
	for (i=0, i < n, i++) {
		scanf("%f", &seq[comp]);
		for (j=0, seq[j] != seq[comp], j++); 
		
		if(j==comp){
			conta[comp]=1;
			comp++;
		}
		else {
			conta[j]++; 
		}
		
	}
	for(j=0, j < comp; j++)
		printf("O numero %f aparece %d vezes na sequencia.\n", seq[j], conta[j]);
		return 0;
}
