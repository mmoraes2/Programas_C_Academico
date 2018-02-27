#include <stdio.h>

int soma(int num1, int num2){
    return num1+num2;
}

int sub(int num1, int num2){
    return num1-num2;
}

int menu(){
    int id; 
    
    printf("\n***********");
    printf("\nCalculadora");
    printf("\n***********");
    
    printf("\n1 - Soma");
    printf("\n2 - Subtrair");
    printf("\n3 - Sair");
    
    printf("\n***********\n");
    
    do{
        printf("\nEscolha a opcao desejada: ");
        scanf("%d", &id);
    }
    while(id<=0 || id>2);
    
    if(id == 1){
        printf("\nSoma!");
    }
    if(id == 2){
        printf("\nSubtracao!");
    }

    return id;
}

int main(){
    
    int m;
    m = menu();
    
    if(m==0)
        return 0;
    else
    
        
    return 0;
}
