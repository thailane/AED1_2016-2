#include <stdio.h>

int main() 
{
  int c,j;
  int a;

  int l;
  	do {
	scanf("%d",&l);
 	 } while (l < 0);


  	a = 1;
  	printf("%d\n",a);

 	if (l) {
	int l_atual = 1;
	c = 2;

	l_atual = 1;
	for(j=1;j<c && l_atual <= l;) {

	   if(j==1) printf("1 ");
	   a = a*(l_atual-j+1)/j;
	   printf("%d ", a);
	   j++;
	   if (j == c) {
		 a = 1;
		 l_atual++;
		 c = l_atual+1;
		 j=1;
		 printf("");
	   }
	}

  }
}
