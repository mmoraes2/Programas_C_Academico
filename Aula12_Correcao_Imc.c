#include <stdio.h>
#include <stdlib.h>

void imc(float n1, float n2){
	float imc = 0;
	
	imc = n2 / (n1 * n1);

	if (imc<=18.50)
    printf("\nVocê esta abaixo do peso!");
    else
    {
      if(imc<25.00)
      printf("\nVocê esta com o peso ideal!");
      else
      {
        if(imc<30.00)
        printf("\nVocê esta com excesso de peso!");
        else
        {
          if(imc>=30.00)
          printf("\nVocê esta com obesidade!");
        }
      }
    }

}

int main()
{

	float altura;
	float peso;

	printf("\nInforme sua altura(ex.: 1.60): ");
	scanf("%f", &altura);

	printf("\nInforme sua peso(ex.: 60): ");
	scanf("%f", &peso);
	imc(altura, peso);

	return 0;
}
