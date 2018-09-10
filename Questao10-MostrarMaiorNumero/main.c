#include<stdio.h>

main(){
    
    int n1,n2;
    
    printf("digite o primeiro numero para comparacao : ");
    scanf("%d",&n1);
    printf("digite o segundo numero para comparacao : ");
    scanf("%d",&n2);
    
    if(n1 > n2){
        printf("o numero %d é maior que %d",n1,n2);
    }else if(n2 > n1){
        printf("o numero %d é maior que o numero %d", n2,n1);
    }else{
        printf("os numeros são iguais");
    }
}