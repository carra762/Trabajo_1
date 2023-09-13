#include <stdio.h>

int main (void) {
    int TL1=0;
    int TL2=0;
    int TC1=0;
    int TC2=0;
    int TR1=0;
    int TR2=0;
    int Total1=0;
    int Total2=0;
    int equipo;
    printf("Bienvenido al contador puntos de basket\n");
    do {
    printf("Escriba el numero del equipo que hizo el punto; puede ser 1 o 2\n");
    printf("Si desea terminar el programa, escriba 0\n");
    do {
        scanf("%d",&equipo);
        if (!(equipo==1 || equipo==2) && equipo!=0 ) {
            printf("Equipo no registrado. Por favor, ingresar otro numero\n");
        }
    } while (!(equipo==1 || equipo==2) && equipo!=0);
    if (!(equipo==0)) {
        if (equipo==1) {
            int puntaje1; 
            printf("Por favor, ingrese el puntaje\n");
            do {
                scanf("%d",&puntaje1);
                if (!(puntaje1>=1 && puntaje1<=3)) {
                    printf("Su puntaje no está registrado\npor favor, ingrese otro valor\n");
                }
            } while (!(puntaje1>=1 && puntaje1<=3));
            switch (puntaje1) {
            case 1: TL1=TL1+1;
                printf("1 punto, Simple!\n");
                break;
            case 2: TC1=TC1+1;
                printf("2 puntos, Doble!\n");
                break;
            case 3: TR1=TR1+1;
                printf("3 puntos, Triple!\n");
                break;
            default: printf("Algo anda mal");
                break;
            }
        Total1=Total1+puntaje1;
        printf("%d\n", Total1);
        } else {
            int puntaje2;
            printf("Por favor, ingresar el puntaje\n");
            do {
                scanf("%d",&puntaje2);
                if (!(puntaje2>=1 && puntaje2<=3)) {
                    printf("Su puntaje no está registrado\npor favor, ingrese otro valor\n");
                }
            } while (!(puntaje2>=1 && puntaje2<=3));
            switch (puntaje2) {
            case 1: TL2=TL2+1;
                printf("1 punto, Simple!\n");
                break;
            case 2: TC2=TC2+1;
                printf("2 puntos, Doble!\n");
                break;
            case 3: TR2=TR2+1;
                printf("3 puntos, Triple!\n");
                break;
            default: printf("algo anda mal\n");
                break;
            }
        Total2=Total2+puntaje2;
        printf("%d\n", Total2);
        }
    } else {
        printf("Muchas gracias por usar nuestro anotador!\n");
    }
    } while (equipo!=0);
    int porcTL1, porcTL2, porcTC1, porcTC2, porcTR1, porcTR2;
    if (Total1!=0 || Total2!=0) {
        porcTL1 = (TL1*100)/Total1;
        porcTL2 =(TL2*100)/Total2;
        porcTC1 = ((TC1*2)*100)/Total1;
        porcTC2 = ((TC2*2)*100)/Total2;
        porcTR1 = ((TR1*3)*100)/Total1;
        porcTR2 = ((TR2*3)*100)/Total2;
        printf("El porcentaje de puntos que representa el puntaje total para cada tipo de tiro del equipo 1\n");
        printf("Triples equipo 1: %d\n", porcTR1);
        printf("Dobles equipo 1: %d\n", porcTC1);
        printf("Simples equipo 1: %d\n", porcTL1);
        printf("El porcentaje de puntos que representa el puntaje total para cada tipo de tiro del equipo 2\n");
        printf("Triples equipo 2: %d\n", porcTR2);
        printf("Dobles equipo 2: %d\n", porcTC2);
        printf("Simples equipo 2: %d\n", porcTL2);
        if (Total1!=Total2) {
            if (Total2>Total1) {
                printf("Mientras que el equipo 1 posee solo un total de %d puntos\nEl ganador es el equipo 2 con %d puntos\nFelicitaciones!", Total1, Total2);
            } else {
                printf("Mientras que el equipo 2 posee solo un total de %d puntos\nEl ganador es el equipo 1 con %d puntos\nFelicitaciones!", Total2, Total1);
            }
        } else {
            printf("Empate");
        }
    } else {
        printf("No hubo puntos en el partido");
    }
}