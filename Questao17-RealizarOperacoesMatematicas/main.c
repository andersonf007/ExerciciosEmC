#include<stdio.h>

main(){
    
    int menu, n1, n2;
    
    printf("escolha uma operação \n"
           "1 - soma \n"
           "2 - subtracao \n"
           "3 - divisao \n"
           "4 - multiplicacao \n\n");
    
    scanf("%d",&menu);
    printf("escreva o valor 1 para o calculo: \n");
    scanf("%d",n1);
    printf("escreva o valor 2 para o calculo: \n");
    scanf("%d",n2);
    
    switch(menu){
        case 1:
            printf("valor: %d", n1 + n2);
            break;
        case 2:
            printf("valor: %d", n1 - n2);
            break;
        case 3:
            printf("valor: %d", n1 * n2);
            break;
        case 4:
            printf("valor: %d", n1 / n2);
            break;
    }
}