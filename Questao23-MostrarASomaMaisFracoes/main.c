#include<stdio.h>

int main(){
    
    float h = 0;
    int n = 0;
    
    
    printf("digite um numero : ");
    scanf("%d",&n);
    
    for(float i = 1; i <= n;i++){
        
        h = h+(1.0/i);

    }
   printf("o somatorio e : %f",h);
   
   return 0;
}

