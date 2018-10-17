#include<stdio.h>

main(){
    
    
    int tempo;
    int horas;
    int minutos;
    int segundos;
    int horas_seg;
    
    printf("digite os segundos : ");
    scanf("%d",&tempo);
    
    horas_seg = 3600;
    
    horas = tempo/horas_seg;
    minutos = (tempo -(horas_seg * horas))/60;
    segundos = (tempo - (horas_seg * horas) - (minutos * 60));
    
    printf("%d h : %d min : %d seg", horas,minutos,segundos);
            
}