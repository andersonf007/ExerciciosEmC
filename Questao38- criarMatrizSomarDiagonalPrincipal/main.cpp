#include<stdio.h>

somaDiagonal(int valor[3][3]){
    
    int soma = 0;
    
    for(int o = 0; o < 3; o++){
        for(int d = 0; d < 3; d++){
            if(o == d)
                soma += valor[o][d];
        }
    }
    printf("O valor da soma da diagonal principal é: %d", soma);
}

main(){
    
    int valor[3][3];
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("digite um valor: ");
            scanf("%d",&valor[i][j]);
        }
    }
    
    somaDiagonal(valor);
}
        
        