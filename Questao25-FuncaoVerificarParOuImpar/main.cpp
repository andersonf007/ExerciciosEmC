#include<stdio.h>

verificaParImpar(int a){
    if(a % 2 == 0)
        return 1;
    else
        return 0;
}
main(){
    
    int numero;
    
    printf("digite um numero: ");
    scanf("%d",&numero);
    
    int n = verificaParImpar(numero);
    
    if(n == 1)
        printf("o numero é  par");
    else
        printf("o numero é  impar");
    
}