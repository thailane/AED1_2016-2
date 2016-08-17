/*
Lucas Almeida da Silva
*/
#include <stdio.h> 
#define MAX 10 

int main() { 
int i, n; 
double prod, x[MAX], y[MAX]; 

printf("Digite o tamanho dos vetores: "); 
scanf("%d", &n); 
printf("Digite os componentes do vetor x: "); 

for (i = 0; i < n; i++) 
   scanf("%lf", &x[i]); 

printf("Digite os componentes do vetor y: "); 

for (i = 0; i < n; i++) 
    scanf("%lf", &y[i]); 

prod = 0; 

for (i = 0; i < n; i++) 
  prod = prod + x[i] * y[i]; 

printf("Produto escalar desses vetores: %g\n", prod); 


return 0; 

} 

