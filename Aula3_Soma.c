#include <stdio.h>

int soma(int n1, int n2)
{
    return(n1+n2);
}

int main(){
    
    int num1, num2, n;
    printf("Insira um numero: ");
    scanf("%d", &num1);
    printf("Insira um numero: ");
    scanf("%d", &num2);
    
    n = soma(num1, num2);
    
    printf("\nA soma e: %d", n);
    
   return 0;
}