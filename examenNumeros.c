//escribir un porgrama en c que solicite 10 numeros positivos, deberá mostrar a suma, el menor y el mayor
//con 2 estrucuturas de control diferentes

#include <stdio.h>
int main(){
	int i,n[10],cont,acum=0;
	int mayor, menor, rep;

	do {
	puts("Ingresa los numeros");
	for(i=0; i<10; i++){
		scanf("%i", &n[i]);

		acum=acum+n[i];
		cont=i;
	}

	mayor=n[0];
	for(i=1; i<10; i++){
		if(n[i] > mayor){
			mayor = n[i];
		}

	}

	menor=n[0];
	for(i=1; i<10; i++){
		if(n[i] < menor){
			menor = n[i];
		}

	}


	printf("la suma es: %i\n", acum);
	printf("el mayor es: %i\n", mayor);
	printf("el menor es: %i\n", menor);

	puts("desea continuar? ");
	puts("0=no");
	scanf("%i",&rep);
	} while(rep!=0);
		printf("Fin");







}