
#include <stdio.h>

main(){
    int contador = 0;
    
    for(int i = 1; contador < 50; i++){
        if(i % 2 == 0){
            printf("%d \n", i);
            contador++;
        }
    }
}