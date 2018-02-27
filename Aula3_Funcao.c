#include <stdio.h>

void contagem_regressiva(int TAM, int TAM2)
{
	int i;
	for(i=TAM;i>=TAM2;i--)
		printf("\n%d", i);
	printf("\nBoom!!\n");
}

int main(){
    
    contagem_regressiva(10, 5);
    contagem_regressiva(5, 2);
    contagem_regressiva(8, 4);
    
    return 0;
}