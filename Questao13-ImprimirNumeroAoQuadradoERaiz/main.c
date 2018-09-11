#include<stdio.h>

main(){
    
    float quadrado,raiz,numero;
    
    printf("digite um numero : ");
    scanf("%f",&numero);
    
    if(numero > 0){
        quadrado = numero * numero;
        raiz = sqrt(numero);
        
        printf("o quadrado de %f é %f e a raiz é %f",numero,quadrado,raiz);
    }else{
        printf("digite um numero positivo");
    }
}