/* equipe:
    Fabiana Bezerra
    Paulo Roberto
    Paulo Silveira
    Pedro Sena
    
    3. Dada uma seqüência de n números, imprimi-la na ordem inversa à da leitura
    
*/    

#include<stdio.h>
#include<stdlib.h>

#define MAX 50


int main()
{
    int comp, i, vet[MAX];
    
    //Recebe a quantidade de números da sequência
    printf("Digite a quantidade de números: ");
    scanf("%d", &n);
    
    //Recebe os números
    printf("Digite os %d números da sequência: ", n);
    for (i=0; i<n; i++) scanf ("%d", &vet[i]);
    
    //Os imprime na ordem inversa a da leitura
    for (i=n-1; i>=0; i--) printf ("%d", vet[i]);
    
    return 0;
}
