#include <stdio.h>
#include <math.h>

int main (void) {
    long int a;
    int mes, dia, Z;
    printf("ingrese el anio: ");
    scanf("%d",&a);
    printf("ingrese el mes: ");
    scanf("%d",&mes);
    printf("ingrese el dia: ");
    scanf("%d",&dia);
    if (mes<=12) {
        if (a % 4 == 0) {
            //printf("anio biciesto\n");
            Z=1;
        } else {
            //printf("anio no biciesto\n");
            Z=0;
        }
        if (mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12) {
            if (dia<=31) {
            //printf("maximo dias 31\n");
            } else {
            //printf("Fecha incorrecta\n");
            }
        }  
        if (mes==4 || mes==6 || mes==9 || mes==11) {
            if (dia<=30) {
            //printf("maximo dias 30\n");
            } else {
            printf("Fecha incorrecta\n");
            }
        }
        if (Z==1) { 
                if(!(dia>29)) {
                    printf("febrero tiene 29 dias");
                } else {
                    printf("Fecha incorrecta");
                }
            } else {
                if (!(dia>28)) {
                    printf("Febrero tiene 28 dias");
                } else {
                    printf("Fecha incorrecta");
                }
            }
        } else {
            printf("Fecha incorrecta");
        }
    } 