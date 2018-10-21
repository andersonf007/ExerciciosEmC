#include<stdio.h>

fatorial(int numero){
    
    int fat = 1;
    for(int i = 1; i <= numero; i++ ){
        fat = fat * i;
    }
    return fat;
}

main(){
    
    int numero;
    
    printf("digite o numero para ser fatorado : ");
    scanf("%d",&numero);
    
    printf("o numero fatorado é: %d", fatorial(numero));
}