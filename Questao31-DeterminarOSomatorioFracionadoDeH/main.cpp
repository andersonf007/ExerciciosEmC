#include<stdio.h>

main(){
    
    float soma = 0, numero = 1;
    
    for(int i = 1; i<= 99; i += 2){
        
        soma = soma + ( i/numero);
        
        numero ++;
    }
    printf("%f", soma);
}