#include <stdio.h>

int main ()
{
     float **matrx;
     int i,j;
     for (i=0;i<50;i++)
          for (j=0;j<50;j++) 
               **matrx=0.0;
     return(0);
}

