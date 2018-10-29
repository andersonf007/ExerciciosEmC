#include<stdio.h>

main(){
    
    float soma = 0;
    float contador = 1;
    for(int i = 1; i <= 10; i++){
        
        if(i % 2 != 0){
            soma += (contador/(contador*contador));
        }else{
            soma -= (contador/(contador*contador));
        }
        contador++;
    }
    printf("%f",soma);
}