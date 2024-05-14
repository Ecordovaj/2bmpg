#include <stdio.h>

int main(){
	int a,b,c;
	puts("Ingresa los 3 digitos uno por uno");
	scanf("%i", &a);
	scanf("%i", &b);
	scanf("%i", &c);

	if(a==1 || a==2 || a==3){
		if(b==1 || b==2 || b==3){
			if(c==1 || c==2 || c==3){
				printf("Acceso Permitido");
			}
		}
	}



	return 0;
}