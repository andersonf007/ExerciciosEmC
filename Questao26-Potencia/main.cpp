#include<stdio.h>

Potencia(int potencia,int base){
    int resultado = 1;
    
    for(int i = potencia; i>= 1; i--){
    resultado = resultado * base;
    }
    return resultado;
    
}

main(){
    
    int base,potencia;
    
    printf("digite a base: ");
    scanf("%d",&base);
    
    printf("digite a potencia: ");
    scanf("%d",&potencia);
    
    printf("a potencia é: %d",Potencia(potencia,base));
}