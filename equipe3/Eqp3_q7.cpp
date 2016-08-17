#include <stdio.h>

#define M 4 
#define N 5 
int main() { 
float a[M][N], v[N], p[M]; 
 

for (int i=0; i<M; i++) 
for (int j=0; j<N; j++) { 
	printf("Informe A[%d][%d]: ", i, j); 
	scanf("%f", &a[i][j]); 
		} 
	for (int j=0; j<M; j++) { 
	printf("Informe V[%d]: ", j); 
	scanf("%f", &v[j]); 
	} 

	for (int i =0; i<M; i++) { 
	p[i] = 0; 
	for (int j=0; j<N; j++) 
	p[i] += a[i][j] * v[j]; 
	} 
	printf("Produto A x V:\n"); 

	for (int i=0; i<M; i++) 
	printf("\t%f\n", p[i]); 
	return 0; 
}
	
	
	
	
	


