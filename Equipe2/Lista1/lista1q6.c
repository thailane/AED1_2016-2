#include <stdio.h>

int main() 
{
	int n, x=1, espaco, i, j;
	
	printf("Digite o numero de linhas: ");
	scanf("%d", &n);
	
	for(i=0; i<n; i++)
	{
		for(espaco=1; espaco <= n-i; espaco++)
			printf("  ");
		
		for(j=0; j<=i; j++)
		{
			if(j==0 || i==0)
				x=1;
			else;
				x=x*(i-j+1)/j;
				
				printf("%4d", x);
		}
		printf("\n");
	
	}	
	return 0;
}