#include <stdio.h>
#include <math.h>

int main(void) {
    printf("Este es un programa que calcula el volumen de un cilindro\n");
    float D;
    float A;
    float V;
    int val;
    const double PI=3.14593;
    do {
        //printf("%f\n", PI);
        printf("ingrese el diametro de su cilindro en metros\n");
        scanf("%f", &D);
        // printf("%f\n", D);
        printf("ingrese la altura de su cilindro en metros\n");
        scanf("%f", &A);
        //printf("%f\n", A);
        V = PI*(pow(D,4)/4)*A;
        printf("El volumen del cilindro es de %f metros cubicos\n", V);
        printf("si quiere reiniciar el programa, ingrese 1, sino, ingrese 0\n");
        scanf("%d", &val);
    } while (val==1);
    printf("muchas gracias!");
}