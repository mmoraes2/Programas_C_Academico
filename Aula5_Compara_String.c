#include<stdio.h>
#include<string.h>

int main()
{
	char nome[50];
	char sobrenome[50];
	
	printf("\n entre com o nome :");
	gets(nome);
	
	printf("\n entre com o sobrenome :");
	gets(sobrenome);
	
	printf("\nnome = %s, sobrenome =%s", nome, sobrenome);
	
	if(strcmp(nome,sobrenome)==0)
		printf("\n nomes iguais !");
	else	
		printf("\n nomes sao diferentes !");
	
	return 0;
}