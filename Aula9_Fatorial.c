#include <stdio.h>

int fatorial(int num){
    
    int i, fat = 1;
    for(i = num; i!=0;i--){
        fat*=i;
    }
    
    return fat;
}


int main(){
    
    int numero, result;
    printf("\nInforme um numero: ");
    scanf("%d", &numero);
    result = fatorial(numero);
    
    printf("\nNumero fatoriado e: %d", result);
    
    return 0;
}