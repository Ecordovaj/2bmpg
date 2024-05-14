#include <stdio.h>
#include <string.h>

int main() {
    char user[20];
    int password,i;

    char root[] = "root";


    for (i=0; i<3; i++){
     printf("Ingresa tu nombre: ");
        scanf("%s", user);

        printf("Ingresa la contraseña: ");
        scanf("%d", &password);

        if (strcmp(user, root) != 0) {
            printf("Usuario incorrecto. Intente nuevamente.\n");
      } else if (password != 1234) {
         printf("Contraseña incorrecta. Intente nuevamente.\n");
     } else {
          printf("Acceso Permitido\n");
          i=4;
    }
    }

    return 0;
}
