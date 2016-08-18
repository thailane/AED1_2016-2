/*
Equipe2
Hermann Hernani
Lucas Botinelly
Stephanny Barreto
*/
#include <stdio.h>

int main ()
{
     float **matrx;
     int i,j;
     matrx=NULL;
	matrx = malloc (50*sizeof (int *));
	for (i=0;i<50;i++){
          matrx[i] = malloc (50*sizeof(int));
	}
     
     for (i=0;i<50;i++)
          for (j=0;j<50;j++) 
               matrx[i][j]=0.0;
     return 0;
}

