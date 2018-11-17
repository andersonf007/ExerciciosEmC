#include<stdio.h>

main(){
    
    int numero[10];
    int j = 0;
    
    for(int i = 2; i <= 20; i ++){
        if(i % 2 == 0){
        numero[j] = i;
        j++;
        }
    }
    printf("%d \n",sizeof(numero));
    for(int k = 0;  k < 10 ; k++){
        printf("[ %d ] = %d \n", k,numero[k]);
    }
}