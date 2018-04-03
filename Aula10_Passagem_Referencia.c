#include <stdio.h>

void troca (int *n1, int *n2){
    int aux;
    
    aux = *n1;
    *n1 = *n2;
    *n2 = aux;
}

int main(){
    
    int a=90, b=8;
    
    printf("\n Antes A = %d, B = %d", a, b);
    troca(&a,&b);
    printf("\n Depois A = %d, B = %d", a, b);
    
    return 0;
}