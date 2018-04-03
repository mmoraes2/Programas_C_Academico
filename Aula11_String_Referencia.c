#include <stdio.h>
#include <string.h>

void imprime_invertido(char *str){
    
    int i, tam;
    tam = strlen(str);
    for(i=tam; i>=0; i++){
        
        printf("%c", str[i])
    }
}

int main(){
    
    char frase[50];
    
    printf("\n Digite uma frase:");
    gets(frase);
    
    imprime_invertido(frase);
    
    return 0;
}