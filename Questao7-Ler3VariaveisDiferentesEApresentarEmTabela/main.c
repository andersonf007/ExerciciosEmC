#include<stdio.h>

main(){

	char c;
	int d;
	float f;

	printf("digite um caracter: ");
	scanf("%c",&c);
	printf("digite um numero inteiro: ");
	scanf("%d",&d);
	printf("digite um numero decimal: ");
	scanf("%f",&f);

	//printf(" _______________ \n |caracter | %c |\n |interio  | %d |\n |float    | %f |\n_______________",c,d,f);
    printf("char %c \t int %d \t float %f",c,d,f);
}
