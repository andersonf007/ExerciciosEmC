#include<stdio.h>

main(){

	char c1,c2,c3;

	printf("digite o primeiro caracter: ");
	scanf("%c",&c1);
	fflush(stdin);
	printf("digite o segundo caracter: ");
	scanf("%c",&c2);
	fflush(stdin);
	printf("digite o terceiro caracter: ");
	scanf("%c",&c3);
	fflush(stdin);

	printf("1 %c\n2 %c\n3 %c",c1,c2,c3);
}
