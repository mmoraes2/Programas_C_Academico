#include <stdio.h>
#include <string.h>

int main(){
    
    char nome[50];
    
    printf("Informe o nome: ");
    gets(nome);
    
    printf("\n%s", strlwr(nome));
    
    return 0;
}