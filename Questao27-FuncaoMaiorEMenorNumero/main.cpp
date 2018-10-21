#include<stdio.h>

verificaMaiorNumero(int maior,int atual){
    
    if(atual>maior)
        return atual;
    else
        return maior;
}

verificaMenorNumero(int menor,int atual){
    
    if(atual < menor)
        return atual;
    else
        return menor;
}

main(){
    
    int menor = 10000,maior = 0, atual;
    
    
    do{
        printf("se quiser parar digite um numero negativo!");
        printf("digite um numero: ");
        scanf("%d",&atual);
        
        if(atual < 0)
            break;
        
        maior = verificaMaiorNumero(maior,atual);
        menor = verificaMenorNumero(menor,atual);
    }while(1==1);
    
    printf("o maior numero é : %d \n", maior);
    printf("o menor numero é : %d", menor);
    
}