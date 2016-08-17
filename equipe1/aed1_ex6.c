#include<stdio.h>
/*	Rodrigo oliveira
	Fernando calderaro
	Thailana neves
	Diogo abreu
	Leticia mota		


6.Imprimir as n primeiras linhas do triângulo de Pascal */


void println( int* v, int tamanho )
{
	int i;

	for ( i = 0; i < tamanho; ++i )
	{
		printf( "%d ", *( v + i));
	

 	}
	putchar('\n');
}

int main( void )
{
	int vetor[32], i, j, altura;

	printf( "Digite altura do triangulo\n" );
  	scanf( "%d", &altura );

 	 vetor[0] = 1;
  	for ( i = 0; i < altura; ++i )
  	{
    		vetor[i + 1] = 0;

    		println( vetor, i + 1 );

    		for ( j = i + 1; j > 0; --j )
		{
      			vetor[j] += vetor[j-1];
  		}
	}
}
