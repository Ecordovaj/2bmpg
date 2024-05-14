////elaborar un programa en c que lea un caracter y utilizando la funcion swicht determine si es o no una vocal

#include <stdio.h>
int main(){
	char vocal;

	scanf("%c", &vocal);

	 switch(vocal){
	 case 'a':
	 case 'e':
	 case 'i':
	 case 'o':
	 case 'u':
	 	printf("%c es una vocal", vocal);

	 	break;
	 default:
	 	printf("%c no es una vocal", vocal);
	 }

	 return 0;
}