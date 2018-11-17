#include<stdio.h>

main(){
    
    int valor[5];
    
    for(int i = 0; i < 5; i++){
        printf("digite um numero: ");
        scanf("%d", &valor[i]);
    }
    
    for(int i = sizeof(valor)/sizeof(valor[0]); i >=0; i--){
        printf("local [ %d ] = %d \n",i,valor[i]);
    }
}