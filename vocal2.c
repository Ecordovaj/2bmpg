#include <stdio.h>
int main(){
	char vocal;


	scanf("%c", &vocal);

	if (vocal=='a' || vocal=='e' || vocal=='i' || vocal=='o' || vocal=='u'){
		printf("%c es una vocal", vocal);
	} else {
			 	printf("%c no es una vocal", vocal);
	}



	 return 0;

	}
