#include <stdio.h>
#include <string.h>


int calculadora(){
    int xd=1,cant,pre,stotal=0,total=0,cen;

    do{
        printf("Ingrese la cantidad de articulos: ");
        scanf("%i",&cant);
        if(cant<0){
            printf("Error, numero negativo");
            break;
        }

        printf("Ingresa el precio: ");
        scanf("%i",&pre);
        if(cant<0){
            printf("Error, numero negativo");
            break;
        }        

        stotal=cant * pre;
        total=total+stotal;

        if(cant==0){
            printf("El total es de: %i", total);
            break;
        }
        //hice mal el commit


    } 
    while(  xd==1 );
}



int main() {
    
    char user[20], group[10];
    int password,i;

    char root[] = "Emiliano";
    char grupo[] = "2BMPG";


    for (i=0; i<3; i++){
        printf("Ingresa tu nombre\n: ");
        scanf("%s", user);

        printf("Ingresa la contraseña\n: ");
        scanf("%d", &password);

        printf("Ingresa tu grupo\n: ");
        scanf("%s", group);

        if (strcmp(user, root) != 0) {
            printf("Usuario incorrecto. Intente nuevamente.\n");
            } else if (password != 45) {
                printf("Contraseña incorrecta. Intente nuevamente.\n");
            } else if (strcmp (group, grupo) != 0) {
                printf("Grupo incorrecto. Intente nuevamente.\n");
            } else{
                printf("Bienvenido al sistema\n");
                    i=4;
            }
    }

    printf("Numero de intentos superados\n");

    /////////////////////////////////////////////////////////////////////////////
    int totalcompra = calculadora();

    


    return 0;

}