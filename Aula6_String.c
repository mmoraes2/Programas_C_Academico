#include<stdio.h>
#include<string.h>

int main()
{
	char password[5];
	char secretpass[5]="12345";
	
	printf("\n Entre com a senha de 5 digitos : ");
	gets(password);

		
	if(!strcmp(password,secretpass))
		printf("\n Senha correta, Sistema liberado !");
	else	
		printf("\n Senha incorreta, Sistema Bloqueado !");
	
	return 0;
}