#include <stdio.h>

int main() {
    int opc;
    int b, h, tri, bm, tra, rec;
    
    puts("CALCULO DE AREAS");
    puts("======================================");
    puts("1.- Calcular el area de un triangulo");
    puts("2.- Calcular el area de un trapecio");
    puts("3.- Calcular el area de un rectangulo");
    scanf("%d", &opc);

    switch(opc) {
        case 1:
            puts("Ingresa la base del triangulo");
            scanf("%i", &b);
            puts("Ingresa la altura del triangulo");
            scanf("%i", &h);
            tri = b * h / 2;
            printf("El area es de: %i\n", tri);
            break;
            
        case 2:
            puts("Ingresa la base menor del trapecio");
            scanf("%i", &b);
            puts("Ingresa la base mayor del trapecio");
            scanf("%i", &bm);
            puts("Ingresa la altura del trapecio");
            scanf("%i", &h);
            tra = ((b + bm) * h) / 2;
            printf("El area es de: %i\n", tra);
            break;

        case 3:
            puts("Ingresa la base del rectangulo");
            scanf("%i", &b);
            puts("Ingresa la altura del rectangulo");
            scanf("%i", &h);
            rec = b * h;
            printf("El area es de: %i\n", rec);
            break;

        default:
            printf("Opción no válida\n");
    }

    return 0;
}
