#include <stdio.h>

int somanum(int num1, int num2);

int main(){
    
    int soma, num1, num2;
    printf("Digite o 1 numero: ");
    scanf("%d", &num1);
    
    printf("Digite o 2 numero: ");
    scanf("%d", &num2);

    soma = somanum(num1, num2);

    printf("\nO valor da soma:", soma);
    
    return 0;
}


int somanum(int num1, int num2) {
   return num1 + num2;
}