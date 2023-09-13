#include <stdio.h>

int ing_Equipo(void);

int main (void) {
    int equipo;
    printf("Bienvenido al contador puntos de basket\n");
    do {
        equipo = ing_Equipo();
        ing_Equipo();
        
    } while (equipo!=0);
}

int ing_Equipo (void) {
    int equipo;
    printf("Escriba el numero del equipo que hizo el punto; puede ser 1 o 2\n");
    printf("Si desea terminar el programa, escriba 0\n");
    do {
        scanf("%d",&equipo);
        if (!(equipo==1 || equipo==2) && equipo!=0 ) {
            printf("Equipo no registrado. Por favor, ingresar otro numero\n");
        }
    } while (!(equipo==1 || equipo==2) && equipo!=0);
    return (equipo);
}

int puntaje (void) {
    int equipo, TL1, TL2, TC1, TC2, TR1, TR2, Total1, Total2;
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
    return (equipo);
}