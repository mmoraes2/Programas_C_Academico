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
    
    do{
        printf("\n\n Escolha a opcao desejada: ");
        scanf("%d", &id);
    }
    
    while(id<=0 || id>2);

    return id;
}

int main(){
    
    int rs;
    rs = menu();
    
    if(rs == 1){
        printf("\n Soma!");
    }
    if(rs == 2){
        printf("\n Subtracao!");
    }
        
    return 0;
}
