#include <stdio.h>

#define MAX 100
int main()
{
	int i,j,n,conta=1;
	float vet[50],aux;
	printf("Digite o numero de elementos do vetor:");
	scanf("%d",&n);
   for(i=0;i<n;i++)
     {
      printf("vet[%d]:",i+1);
      scanf("%f",&vet[i]);
     }
   for(i=0;i<n;i++){
      aux=vet[i];
      conta=1;
      for(j=i+1;j<n;j++){
         
            if(aux==vet[j]){
               conta=conta+1;
               vet[j]=1000;
               }
      }
      if(vet[i]!= 1000){
         if(conta>1){
             printf("%f ocorre %d vezes.\n",vet[i],conta); 
             }else
                   {
                    printf("%f ocorre %d vez.\n",vet[i],conta);
                    }
       }
                              
   }
return 0;
}
	

