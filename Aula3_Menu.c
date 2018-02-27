#include <stdio.h>

int menu(){
    int id; 
    
    printf("\n***********\n");
    printf("\nCalculadora\n");
    printf("\n***********\n");
    
    printf("\n1 - Soma");
    printf("\n2 - Subtrair");
    printf("\n3 - Sair");
    
    printf("\n\n***********\n");
    
    printf("\n\n Escolha a opcao desejada: ");
    scanf("%d", &id);

    return id;
}

int main(){
    
    int rs;
    rs = menu();
    
    if(rs == 1){
        printf("\nSoma!");
    }
    if(rs == 2){
        printf("\nSubtracao!");
    }
    
    return 0;
}
