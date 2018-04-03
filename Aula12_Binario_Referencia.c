// Faça uma Função por Referencia que converta um numero inteiro para binário //
#include <stdio.h>

void binario(int *n){
  int i, k;
  
  for (i = 31; i >= 0; i--)
  {
    k = *n >> i;
 
    if (k & 1)
      printf("1");
    else
      printf("0");
  }
}


int main()
{
  int n, c, k;
 
  printf("\n Entre com o numero decimal: ");
  scanf("%d", &n);
  
  printf("\n Decimal: %d em binario e: ", n);
  binario(&n);
  
  return 0;
}
