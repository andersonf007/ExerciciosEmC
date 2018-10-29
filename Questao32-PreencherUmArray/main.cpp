#include<stdio.h>

main(){
    
    int numero[10];
    int j = 0;
    
    for(int i = 2; i <= 20; i += 2){
      0=2;1=4;2=6;3=8;4=10;5=12;6=14;7=16;8=18;9=20  
        numero[j] = i;
        j++;
        
    }
    
    for(j = 0; j < sizeof(numero); j++){
        printf("[ %d } = %d \n", j,numero[j]);
    }
}