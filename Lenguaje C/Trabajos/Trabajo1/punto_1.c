/*
Escribir un programa que calcule el módulo de un número complejo y su ángulo (fase)
ingresando su parte real y su parte imaginaria. 
*/

#include <stdio.h>
#include <math.h>
#define PI 3.14159

void bienvenida(void);
float ingreso_real(void);
float ingreso_img(void);
float resultado_modulo(float, float);
float resultado_fase(float, float);

int main (void) {
    float real,img,mod,fase;
    bienvenida();
    real=ingreso_real();
    img=ingreso_img();
    mod=resultado_modulo(real, img);
    fase=resultado_fase(real, img);
    return 0;
}

void bienvenida(void){
    printf("Bienvenido al programa\n");
}
float ingreso_real(void){
    float real;
    printf("Por favor, ingresar la parte real\n");
    scanf("%f",&real);
    return (real);
}
float ingreso_img(void) {
    float img;
    printf("Por favor, ingresar la parte imaginaria\n");
    scanf("%f",&img);
    return (img);
}
float resultado_modulo(float real, float img){
    float mod;
    mod= sqrt((real*real)+(img*img));
    printf("el modulo es de: %f\n", mod);
    return (mod);
}
float resultado_fase(float real, float img){
    float fase;
    fase= atan((img/real))*(180/PI);
    printf("la fase es de: %f\n", fase);
    return (fase);
}