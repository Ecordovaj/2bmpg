#include <stdio.h>
//Julio Alberto Urbina Aquino
//3/5/24
//9:55
int main(){
    int n,i;
    puts("Ingresa el limite\n");
    scanf("%i", &n);
    n=n*5;

    for (i = 0; i <= n; i += 5){
        printf("%d\n", i);
    }



    return 0;
}