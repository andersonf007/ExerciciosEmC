#include<stdio.h>

main(){
    
    int valor[10],soma = 0, indice = 0;
    int i  = 0;
    int leitura = 0;
    for(i = 0; i < 10; i++){
        printf("digite um numero: ");
        scanf("%d",&leitura);
        valor[i] = leitura;
        soma += valor[i];
    }
    
    int media = soma /10;
    
    for(int i = 0; i < 10; i++){
        if(valor[i] > media){
            printf("O valores acima da media são: indice - %d / valores - %d \n",i,valor[i]);
        }
    }
}