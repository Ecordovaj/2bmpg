#include <stdio.h>

int main() {
    char user[20], group[10];
    int password,i;
    

    char root[] = "Emiliano";
    char grupo[] = "2bmpg";

	
    for (i=0; i<3; i++){
        password=123;
		printf("Ingresa tu nombre\n: ");
        scanf("%s", user);

        printf("Ingresa la contraseña\n: ");
        scanf("%d", &password);

        printf("Ingresa tu grupo\n: ");
        scanf("%s", group);

        if (strcmp(user, root) != 0) {
            printf("Usuario incorrecto. Intente nuevamente.\n");
            } else if (password != 123) {
                printf("Contraseña incorrecta. Intente nuevamente.\n");
            } else if (strcmp (group, grupo) != 0) {
                printf("Grupo incorrecto. Intente nuevamente.\n");
            } else{
                printf("Bienvenido al sistema\n");
                    i=4;
            }
    }

    printf("Numero de intentos superados");

    return 0;

}
