#include <stdio.h>
int main(){
	int n;
	int acum = 0, cont = 0;
	int numeros[100];
	int i = 0;

	do {
		scanf("%i", &n);
		printf("Su numero fue: %i\n",n);
		cont=cont+n;
		numeros[i++] = n;
	} while(n!=0);
		printf("Finalizado\n");
		printf("Suma: %i\n",cont);
   	 printf("Numeros:\n");
   	 for (int j = 0; j < i; j++){
   	 	printf("%i\n", numeros[j]);
   	 }

	return 0;
}