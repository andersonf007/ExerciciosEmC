#include<stdio.h>

main(){
    
    int valor[2][2];
    int contador=0;
    int numero;
    
    for(int i = 0; i < 2;i++){
        for(int j = 0; j < 2; j++){
            printf("digite um numero: ");
            scanf("%d",&numero);
            valor[i][j]=numero;
        }
    }
    
    for(int i = 0; i < 2 ; i ++){
        for(int j = 0; j < 2; j++){
            if(valor[i][j] > 10){
                printf("valor[%d][%d] = %d \n", i,j,valor[i][j]);
            }
        }
    }
}
      