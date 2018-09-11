#include<stdio.h>

main(){
    
    int menu;
    float altura, pesoIdeal;
    
    printf("digite o numero correspondente ao seu sexo: \n"
           "1 - homem \n"
           "2 - mulher \n\n");
    scanf("%d",&menu);
    fflush(stdin);
    
    switch(menu){
        case 1 :
            printf("digite a sua altura : ");
            scanf("%f",&altura);
            fflush(stdin);
            pesoIdeal = (72.7 * altura) - 58.0;
            printf("O seu peso ideal é : %f", pesoIdeal);
            
            break;
        case 2 :
            printf("digite a sua altura : ");
            scanf("%f",&altura);
            fflush(stdin);
            pesoIdeal = (62.1 * altura) - 44.7;
            printf("O seu peso ideal é : %f", pesoIdeal);
            
            break;
                       
    }
}