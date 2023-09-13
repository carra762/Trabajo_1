#include <stdio.h>

int main (void) {
    float P1, P2, P3, M;
    int val; 
    printf("esta es una calculadora de media de precios\n");
    do {
        printf("Ingrese el precio en el primer local\n");
        scanf("%f", &P1);
        printf("ingrese el precio en el segundo local\n");
        scanf("%f", &P2);
        printf("ingrese el precio en el tercer local\n");
        scanf("%f", &P3);
        M = (P1+P2+P3)/3;
        printf("%f\n", M);
        printf("ingrese 1 si quiere volver a iniciar el programa, sino 0");
        scanf("%d", &val);
    } while (val==1);
    printf("muchas gracias!");
}