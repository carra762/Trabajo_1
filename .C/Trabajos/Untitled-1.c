//Incluimos las librerías que necesitamos para nuestro código
#include <stdio.h>
#include <stdint.h>

int main (void) {
    //Primero definimos las variables. Aquellas variables que no están definidas obtendrán su valor correspondiente dependiendo de lo que ingrese el usuario
    int n;
    int m;
    uint8_t volver; 
    printf("Este programa te muestra la tabla de multiplicacion del numero que usted elija\n");
    //Colocamos un do while para realizar el código que está dentro del ciclo 
    do {  
        //Pedimos al usuario que ingrese los datos necesarios
        printf("Por favor, ingresar el numero\n");
        scanf("%d",&n);
        printf("ingrese cuantos multiplos desea ver\n");
        scanf("%d",&m);
        printf("\n");
        //Colocamos un for para realizar la múltiplicación hasta la cantidad de múltiplos que desea el usuario
        for (int i=0;i<=m;i++) {
            printf("%d x %d = %d\n",n,i,n*i); 
        }
        printf("si desea volver a empezar, presione 1, si quiere que termine el programa, presione 0\n");
        scanf("%d",&volver);
    } while(volver==1); 
   printf("Muchas gracias!");
}