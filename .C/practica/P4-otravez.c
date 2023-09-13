#include <stdio.h>

int main (void) {
    int Hora, Min, Seg;
    printf("hora\n");
    scanf("%d", &Hora);
    printf("Minutos\n");
    scanf("%d", &Min);
    printf("Segundos\n");
    scanf("%d", &Seg);
    if (Hora<=23 && Min<=59 && Seg<=59) {
        Seg+=1;
        if (Seg == 60) {
            Min+=1;
            Seg = 0;
            if (Min == 60 ) {
                Hora+=1;
                Min = 0;
                if (Hora == 24) {
                    Hora = 0;
                }
            }
        } 
        printf("%d : %d : %d", Hora, Min, Seg); 
    } else {
        printf("no es correcto");
    }
} 