#include <stdio.h>

int somanum(int num1, int num2);

int main(){
    
    int soma, n1, n2;
    printf("Digite o 1 numero: ");
    scanf("%d", &n1);
    
    printf("Digite o 2 numero: ");
    scanf("%d", &n2);

    soma = somanum(n1, n2);

    printf("\nO valor da soma: %d", soma);
    
    return 0;
}


int somanum(int num1, int num2) {
   return num1 + num2;
}
