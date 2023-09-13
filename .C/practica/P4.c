#include <stdio.h>

int main (void) {
    int Ho, Min, Seg, Z;
    do {
        printf("Ingrese la hora\n");
        scanf("%d", &Ho);
        if (Ho>0 && Ho<24) {
            printf("hora adecuada\n");
        do {
            printf("Ingrese los minutos\n");
            scanf("%d", &Min);

        if (Min>0 && Min<60) {
            printf("minutos adecuados\n");
        do {
            printf("ingrese los segundos\n");
            scanf("%d", &Seg);
        if (Seg>0 && Seg<60) {
            printf("segundos adecuados\n");
        if (Ho<=23 && Min<=59 && Seg<=59) {
            Seg+=1;
        }
        if (Seg == 60) {
            Min+=1;
            Seg = 0;
        }
        if (Min == 60) {
            Ho+=1;
            Min = 0;
        }
        if (Ho == 24) {
            Ho = 0;
        } 
        printf("%d : %d : %d", Ho, Min, Seg);

        } else {
            printf("segundos inadecuados. Por favor, ingresar otro valor\n");
            Z=2;
        }
        } while (Z==2); 
        } else {
            printf("minutos inadecuados. Por favor, ingresar otro valor\n");
            Z=1;
        }
        } while (Z==1);
        } else {
            printf("hora inadecuada. Por favor, ingresar otro valor\n");
            Z=0;
        }
    } while (Z==0);
}
