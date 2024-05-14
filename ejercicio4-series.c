#include <stdio.h>
int main(){
	int n,i;
	puts("Ingresa las veces que se repetira");
	scanf("%i",&n);

	for(i=0; i<n; i+=5){
		printf("%i", i);
	}
	
	return 0;
}