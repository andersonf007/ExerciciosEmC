#include<stdio.h>

main(){
    
    int numero;
    
    printf("digite um numero : ");
    scanf("%d",&numero);
    
    if(numero % 3 == 0 && numero % 5 == 0){
        printf("O numero é divisivel por 3 e 5");
    }else if(numero % 3 == 0 && numero % 5 != 0){
        printf("O numero é divisivel por 3");
    }else if(numero % 5 == 0 && numero % 3 != 0){
        printf("O numero é divisivel por 5");
    }
}