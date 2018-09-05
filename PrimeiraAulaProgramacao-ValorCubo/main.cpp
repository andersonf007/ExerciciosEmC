#include<stdio.h>

main(){
    int num, cubo;
    
   printf("Cubo de um numero \n \n ");
   printf("Digite o numero:");
   
   scanf("%d",&num);
   
   cubo = num * num * num;
   
   printf("\n Cubo de %d = %d",num,cubo);
}