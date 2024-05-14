#include <stdio.h>

int main() {
    int n1, n2, n3, n4, n5;

    puts("Ingresa los 5 numeros");
    scanf("%i", &n1);
    scanf("%i", &n2);
    scanf("%i", &n3);
    scanf("%i", &n4);
    scanf("%i", &n5);

    if (n1 < n2 && n1 < n3 && n1 < n4 && n1 < n5) {
        printf("El menor es %i\n", n1);
    } else if (n2 < n1 && n2 < n3 && n2 < n4 && n2 < n5) {
        printf("El menor es %i\n", n2);
    } else if (n3 < n1 && n3 < n2 && n3 < n4 && n3 < n5) {
        printf("El menor es %i\n", n3);
    } else if (n4 < n1 && n4 < n2 && n4 < n3 && n4 < n5) {
        printf("El menor es %i\n", n4);
    } else {
        printf("El menor es %i\n", n5);
    }

    return 0;
}
