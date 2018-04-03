#include <stdio.h>
#include <string.h>

int triangulo_valido(int a, int b, int c){
   
   int validador = 0;
   
   if(a < (b+c) && b < (a+c) && c < (a+b))
        validador = 1;

    return validador;
}

int main(){

    int result, a1, b1, c1;

    printf("\nInforme lado A: ");
    scanf("%d", &a1);
    printf("\nInforme lado B: ");
    scanf("%d", &b1);
    printf("\nInforme lado C: ");
    scanf("%d", &c1);
    result = triangulo_valido(a1, b1, c1);
    
    if(result == 1)
        printf("\nTriangulo Valido!");
    else
        printf("\nTriangulo Invalido!");
    
    return 0;
}