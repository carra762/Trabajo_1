/*
Escribir un programa que devuelva el número complejo en formato rectangular (su
parte real + j su parte imaginaria), ingresando su módulo y ángulo (fase).
*/

#include <stdio.h>
#include <math.h>
#define PI 3.14159

void bienvenida(void);
float ingresa_modulo(void);
float ingresa_fase(void);
float resultado_real(float,float);
float resultado_img(float, float);

int main (void) {
    float mod, fase, real, img;
    bienvenida();
    mod=ingresa_modulo();
    fase=ingresa_fase();
    real=resultado_real(mod, fase);
    img=resultado_img(mod, fase);
}
void bienvenida(void){
    printf("Bienvenido al programa\n");
}
float ingresa_modulo(void){
    float mod;
    printf("Por favor, ingresar el modulo\n");
    scanf("%f",&mod);
    return (mod);
}
float ingresa_fase(void){
    float fase;
    printf("Por favor, ingresar la fase\n");
    scanf("%f",&fase);
    return (fase);
}
float resultado_real(float mod,float fase){
    float real;
    real= mod*cos(fase * (PI/180));
    printf("la parte real es de %f\n", real);
    return(real);
}
float resultado_img(float mod, float fase){
    float img;
    img= mod*sin(fase * (PI/180));
    printf("la parte imaginaria es de %f\n", img);
    return (img);
}

