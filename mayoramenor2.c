//elaborar un plrgrama en c que introduciods 3 valores por teclado nos muestre en pantalla de mayor a menor

#include <stdio.h>
int main(){
	int a,b,c;

	scanf("%i", &a);
	scanf("%i", &b);
	scanf("%i", &c);

	if(a>b && b>c && c<a){
		printf("%i %i %i", a,b,c);
	} else if (b>a && b>c && c<b){
		printf("%i %i %i", b,a,c);
	} else if(c>a && c>b && b<c)
		printf("%i %i %i", c,a,b);
		

	return 0;

	}

