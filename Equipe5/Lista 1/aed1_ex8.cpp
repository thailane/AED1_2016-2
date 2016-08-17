/*
Lucas Almeida da Silva
*/
#include <stdio.h>

main() {
  
  int i1, j1, i2=1, j2, i, j, k,w, m1[50][50],cont, m2[50][50], m3[50][50];
    
  printf("\n==========MATRIX CHECKER==========\n");
  printf("\nMatriz 1\n==========\n");
  printf("\nDigite o numero de linhas...: ");
  scanf("%d", &i1);
  printf("Digite o numero de colunas..: ");
  scanf("%d", &j1);
  j2=i1;
  if (i1 == j2) {
    printf("\nValores da Matriz\n=====================\n\n") ;
    for (i=0; i<i1; i++) {
      for(j=0; j<j1; j++) {
        printf("Digite um valor para [%d][%d].: ", (i+1), (j+1));
        scanf("%d", &m1[i][j]);
      }
    }
    for (i=0; i<i1; i++) {
      for (j=0; j<j1; j++) {
       cont=0;
       for(k=0; k<i1; k++){
       	for(w=0; w<j1; w++){
       		if(m1[i][j]==m1[k][w]){
       			cont++;
       			if(cont>=2){
       			printf("Existem valores repetidos!");
       			return(0);
				   }
			   }
		   }
	  	 }
      }
    }
    printf("NÃO existem valores repetidos!");
  return(0);  

}
}

