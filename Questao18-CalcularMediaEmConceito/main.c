#include<stdio.h>

main(){
    
    int n1,n2,n3,media;
    
    printf("digite a primeira nota do aluno: ");
    scanf("%d",&n1);
    printf("digite a segunda nota do aluno: ");
    scanf("%d",&n2);
    printf("digite a terceira nota do aluno: ");
    scanf("%d",&n3);
    
    media = n1 + n2 + n3 / 3;
    
    if(media < 3){
        printf("nota F");
    }else if(media >=3 && media < 5){
        printf("nota D");
    }else if(media >= 5 && media < 7){
        printf("nota C");
    }else if(media >= 7 && media < 9){
        printf("nota B");
    }else{
        printf("nota A");
    }
}