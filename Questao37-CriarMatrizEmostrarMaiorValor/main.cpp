#include<stdio.h>


maiorValor(int valor[4][4]){
    
    int maior = 0;
    int coluna,linha;
     
    for(int i = 0; i <4 ; i ++){
        for(int j = 0; j <4; j++){
            if(valor[i][j] > maior){
               maior = valor[i][j];
               coluna = j;
               linha = i;
            }
        }
    }
    printf("O maior elemento esta na linha - %d e coluna %d. O maior valor é: %d",linha,coluna,maior);
     
}
main(){
    
    int valor [4][4];
    
    
    for(int i = 0; i <4; i++){
        for(int j = 0; j <4; j++){
        printf("digite um valor: ");
        scanf("%d",&valor[i][j]);
        }
    }
    
    maiorValor(valor);
    
   
        
}