#include <stdio.h>

int main (void) {
    int pez=0, pescador, l1=0, l2=0, l3=0, c1=0, c2=0, c3=0, Tl1=0, Tl2=0, Tl3=0, Ptotal, Ctotal;
    printf("Contador de puntos de la pesca del Pejerrey.\n");
    do {
        printf("Por favor, ingresar a que pescador (1, 2 o 3) le corresponde el pez pescado.\nSi ingresa 0, el programa finalizara.\n");
    do {
        scanf("%d",&pescador);
        if (!(pescador>=0 && pescador<=3)) {
            printf("El pescador que ingreso no existe. Por favor, ingrese otro numero\n");
        }
    } while (!(pescador>=0 && pescador<=3));
    if (!(pescador==0)) {
        if (pescador==1) {
            printf("Ingrese la longitud de la pieza extraida\n");
            do {
            scanf("%d",&l1);
            if(!(l1>0)) {
                printf("Longitud no aceptada. Por favor, ingrese otra longitud\n");
            }
            } while (!(l1>0));
            c1=c1+1;
            Tl1+=l1;
        } else {
            if (pescador==2) {
                //printf("pescador 2");
                printf("Ingrese la longitud de la pieza extraida en cm\n");
                do {
                scanf("%d",&l2);
                if(!(l2>0)) {
                    printf("Longitud no aceptada. Por favor, ingrese otra longitud\n");
                }
                } while (!(l2>0));   
                c2=c2+1;
                Tl2+=l2;
            } else {
                //printf("pescador 3");
                printf("Ingrese la longitud de la pieza extraida en cm\n");
                do {
                scanf("%d",&l3);
                if(!(l3>0)) {
                    printf("Longitud no aceptada. Por favor, ingrese otra longitud\n");
                }
                } while (!(l3>0));
                c3=c3+1;
                Tl3+=l3;
            }
        }
    } else {
        if (!(c1==0 && c2==0 && c3==0)) {
            if (c1>c2 && c1>c3) {
                printf("El pescador 1 extrajo la mayor cantidad de piezas del agua, con %d piezas\n", c1);
            }
            if (c2>c1 && c2>c3) {
                printf("El pescador 2 extrajo la mayor cantidad de piezas del agua, con %d piezas\n", c2);
            } 
            if (c3>c1 && c3>c2) {
                printf("El pescador 3 extrajo la mayor cantidad de piezas del agua, con %d piezas\n", c3);
            }
            if (l1==l2 || l1==l3 || l2==l3) {
                if (l1==l3) {
                    printf("Hubo un empate entre pescador 1 y 3, con una longitud de %d cm\n", c1);
                }
                if (l1==l2) {
                    printf("Hubo un empate entre pescador 1 y 2, con una longitud de %d cm\n", c2);
                }
                if (l2==l3) {
                    printf("Hubo un empate entre pescador 2 y 3, con una longitud de %d cm\n", c3);
                }
            } else {
                printf("No hay empates\n");
            }
            if (l1>l2 && l1>l3) {
                printf("El pescador 1 obtuvo la pieza mas grande con %d cm\n", l1);
            } else {
                if (l2>l1 && l2>l3) {
                    printf("El pescador 2 obtuvo la pieza mas grande con %d cm\n", l2);
                } else {
                    printf("El pescador 3 obtuvo la pieza mas grande con %d cm\n", l3);
                }
            }
            Ptotal = (Tl1+Tl2+Tl3)/3;
            Ctotal = c1+c2+c3;
            printf("El total de piezas extraidas del agua fue de: %d piezas\n", Ctotal);
            printf("El promedio de longitud de las piezas fue de: %dcm\n", Ptotal);
        } else {
            printf("no hubo pesca en la competencia\n");
        } 
    }
    } while (pescador!=0);
    printf("Muchas gracias por usar el contador.");
}