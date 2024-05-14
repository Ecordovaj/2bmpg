//escribir un porgrama en c que solicite 10 numeros positivos, deberá mostrar a suma, el menor y el mayor
//con 2 estrucuturas de control diferentes

#include <stdio.h>
int main(){
	int n, sum=0, mayor, menor;
	puts("Ingresa los numeros:\n");
	scanf("%i", &n);
	mayor = menor = n;
	sum += n;

	int cont = 1;

	do{
		scanf("%i", &n);
		sum += n;

		if (n<menor){
			menor = n;
		}

		if (n>mayor){
			mayor = n;
		}

		cont++;
	}while (cont < 10);

	printf("Suma: %i\n", sum);
	printf("Mayor: %i\n", mayor);
	printf("Menor: %i\n", menor);

}