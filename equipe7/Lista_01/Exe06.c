/* equipe:
    Fabiana Bezerra
    Paulo Roberto
    Paulo Silveira
    Pedro Sena
    
   6. Imprimir as n primeiras linhas do triângulo de Pascal
   
*/

#include<stdio.h>

 int main()
 {

    int linha, espacos, num_linhas, r, elemento;
// r = posicao do elemento em sua linha

    printf("Insira o numero de linhas do triangulo: ");
    scanf("%d", &num_linhas);

// logica de preenchimento do triangulo    
    for(linha=0; linha<num_linhas; linha++){
        for(espacos=1; espacos<num_linhas - linha; espacos++){
            printf(" ");
        }
        for(r = 0; r <= linha; r++){
            if(r == 0 || r == linha){
                elemento = 1;
                printf("%d ", elemento);
            }
            else{
                elemento = elemento * (linha - r + 1)/r;
                printf("%d ", elemento);
            }
        }
    printf("\n");
    }
return 0;
}
