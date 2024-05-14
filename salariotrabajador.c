#include <stdio.h>
int main(){
	int horas,precio;
	float total;

	puts("Ingrese las horas trabajadas");
	scanf("%i", &horas);
	puts("Ingrese el precio cobrado por hora");
	scanf("%i", &precio);

	if(horas >= 40){
		horas=horas+(horas*0.5);
		total=horas*precio;
	} else if (horas >= 50){
		horas=horas+(horas);
		total=horas*precio;
	} else{
		total=horas*precio;
	}


	printf("Su salario semanal es de %.2f", total);




	return 0;

}