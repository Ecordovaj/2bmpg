//escribir un programa que reciba un numero de una carta de una baraja española e imprima por pantalla "as" si es un uno "sota" si es un 10, "caballo" si es un 11 y "Rey" si es un 12. Para numeros entre 2 y 9 (incluidos) debe imprimir no es ninguna figura ni as". Para otros numeros debe imprimir " este no es numero de una carta de la baraja española

#include <stdio.h>
int main(){
	int carta;
	char tipo[15];
	puts("Ingresa el tipo de la baraja");
	scanf("%s", tipo);
	puts("Ingresa el numero de la baraja");
	scanf("%i", &carta);
//mnj
	switch(carta){
	case 1:
		printf("As\n");
		break;
	case 10:
		printf("Sota\n");
		break;
	case 11:
		printf("Caballo\n");
		break;
	case 12:
		printf("Rey\n");
		break;
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
		printf("No tiene figura\n");
		break;
	default:
		printf("Este no es un numero de la Baraja Española\n");
	}

	printf("%s", tipo);
	


	return 0;
}