#include <stdio.h>
#include <math.h>

int main (void) {
    double V;
    double D;
    double H;
    double R;
    const double Pi=3.14593;
    int val;
    do {
        printf("introduzca el diametro en metros\n");
        scanf("%d",&D);
        printf("introduzca la altura en metros\n");
        scanf("%d",&H);
        R = D/2;
        V = Pi*(pow(R,2))*H;
        printf("el volumen del cilindro es de %d litros\n", V);
        printf("si desea repetir el programa, ingrese 0, sino, ingrese 1\n");
        scanf("%d",&val);
    } while (val==0);
}