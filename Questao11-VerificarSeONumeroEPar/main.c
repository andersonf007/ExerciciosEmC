#include<stdio.h>

main(){
    
    int numero;
    
    printf("digite o numero que deseja saber se é par : ");
    scanf("%d",&numero);
    
    if(numero % 2 == 0){
        printf("O numero é par");
    }else{
        printf("O numero é impar");
    }    
}