#include <stdio.h>
#include <stdlib.h>

int fatorial(int n)
{
  int m;
  
  if(n==0) return 1;
  
  if(n==1) return 1;
  
  if(n>1) return m=n*fatorial(n-1);
  
}

int main ()
{
  int n, r;
  scanf("%d", &n);
  
  r=fatorial(n)
  printf("%d", r);
  return 0;
}
