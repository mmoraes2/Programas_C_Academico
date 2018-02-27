#include <stdio.h>

int soma(int num1, int num2){
    return num1+num2;
}

int sub(int num1, int num2){
    return num1-num2;
}

int menu(){
    int id; 
    
    printf("\n***************");
    printf("\n* Calculadora *");
    printf("\n***************");
    
    printf("\n1 - Soma");
    printf("\n2 - Subtrair");
    printf("\n3 - Sair");
    
    printf("\n***************\n");
    
    do{
        printf("\nEscolha a opcao desejada: ");
        scanf("%d", &id);
    }
    while(id<=0 || id>2);
    
    if(id == 1){
        printf("\nSoma!\n\n");
    }
    if(id == 2){
        printf("\nSubtracao!\n\n");
    }

    return id;
}

int main(){
    
    int m, n1, n2;
    m = menu();
    
    if(m==0)
        return 0;
    else
    {
        printf("Informe o 1 numero: ");
        scanf("%d", &n1);
        printf("Informe o 2 numero: ");
        scanf("%d", &n2);
        
        if(m == 1)
            printf("\nSoma = %d", soma(n1, n2));
        else
            printf("\nSubtracao = %d", sub(n1, n2));
    }
        
    return 0;
}
