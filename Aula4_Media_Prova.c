#include <stdio.h>

int unilasalle_resultado(float a1, float a2, float a3){
    
    int pass = 0;
    float res;
    
    if((a1 + a2) >= 12)
        pass = 1;
    else{
        if(a3>a1){ 
            a1 = a3;
            res = (a1 + a2) / 2;
        {
        else{
            a2 = a3;
            res = (a1 + a2) / 2;
        }    
            if(res >= 6)
                pass = 1;
            
        }
    
    
    return pass;
}

int main(){
    
    int result;
    float a1, a2, a3;
    printf("Informe a AV1: ");
    scanf("%f", &a1);
    
    printf("Informe a AV2: ");
    scanf("%f", &a2);
    
    printf("Informe a AV3: ");
    scanf("%f", &a3);
    
    result = unilasalle_resultado(a1,a2,a3);
    
    if(result == 1)
        printf("\n Passou!");
    else
        printf("\n Não Passou!");
    
    
    return 0;
}