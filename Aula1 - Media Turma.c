#include <stdio.h>
#define TAM 5

int main() {
    
    int  i, cont=0;
    float notas[TAM], media=0, mediaturma=0;
    
    //calcular notas
    for(i=0;i<TAM;i++)
    {
        printf("\n Insira uma nota: ");
        scanf("%f", &notas[i]);
        media += notas[i];
    }
    
    //calcular media
    mediaturma = media / TAM;
    
    //calcular a maior media
    for(i=0;i<TAM;i++)
    {
        if(notas[i]>mediaturma)
        cont++;
    }
    
    printf(" \n Numero de alunos acima da media: %d", cont);
    
    return 0;
}