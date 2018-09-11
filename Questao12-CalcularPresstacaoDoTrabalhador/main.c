#include<stdio.h>

main(){
    
    double salario,prestacao;
    
    printf("digite o valor do salario do funcionario :");
    scanf("%d", &salario);
    fflush(stdin);
    printf("digite o valor da prestação :");
    scanf("%d",&prestacao);
    
    salario = salario * 0,20;
    
    if(prestacao > salario){
        printf("emprestimo não concedido");
    }else{
        printf("imprestimo concedido");
    }
    
}