#include<stdio.h>
#include <cstdlib>

main(){
    
    int valor[10],numero;
    
    for(int i = 0; i < 10; i++){
        valor[i]= rand() % 10;
    }
    
    printf("digite um numero de 0 à 10: ");
    scanf("%d",&numero);
    
    for(int i = 0; i<10;i++){
        printf("%d \n", valor[i]);
        if(valor[i] == numero){
            printf("o valor esta no array \n");
        }else{
            printf("o valor NÃO esta no array \n");
        }
    }
}