#include<stdio.h>
 
main(){
    
    int anacleto = 150;
    int felisberto = 110;
    int contador;
    
    while(anacleto >= felisberto){
        anacleto += 2;
        felisberto += 3;
        contador ++;
       
    }
    printf("felisberto levou %d anos para ultrapassar anacleto", contador);
}