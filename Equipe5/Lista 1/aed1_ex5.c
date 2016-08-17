/*
Lucas Almeida da Silva
*/
#include <stdio.h>
#include <stdbool.h>
# define MAX 100

int main(){
	int n,cabecote=0;
	float aux;
	int i = 0,j =0;
	float vector[MAX],Valores[10];
	puts("Entre com o tamanho do vetor 'n': ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%f",&aux);
		Valores[i]=aux;
		bool contains= false;
		for(j=0;j<cabecote;j++){
			if(vector[j]==aux) {
				contains= true;
			}
		}
		if(contains==false){
			vector[cabecote]= aux;
			cabecote++;
		}
	}
	for(i=0;i<cabecote;i++){
		int ContaOcorrencia=0;
		printf("%f",vector[i]);
		for(j=0;j<n;j++){
			if(vector[i]== Valores[j]) ContaOcorrencia++;}
		printf(" - %d   ",ContaOcorrencia);
		puts("");
	}

}
