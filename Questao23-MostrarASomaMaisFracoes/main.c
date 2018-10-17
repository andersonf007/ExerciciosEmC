#include<stdio.h>

int main(){
    
    float h,n;
    
    
    printf("digite um numero : ");
    scanf("%f",&n);
    
    for(int i = 0; i <= n;i++){
        
        h = h+(1.0/i);
    }
   printf("o somatorio e : %f",h);
   
   return 0;
}

