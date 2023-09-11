/*Escribir un programa que al recibir una impedancia (parte real y parte imaginaria) y la 
frecuencia de trabajo, indique el valor de la resistencia y el capacitor o inductor según 
corresponda. 
*/
#include <stdio.h>
#include <math.h>
#define PI 3.14159

void bienvenida(void);
float ingreso_real(void);
float ingreso_img(void);
float ingreso_frec(void);
float valor_resistencia(float);
float valor_inductancia(float, float);
float valor_capacitancia(float, float);

int main (void){
    float real, img, frec, res, imgl, imgc;
    bienvenida();
    real=ingreso_real();
    img=ingreso_img();
    frec=ingreso_frec();
    res=valor_resistencia(real);
    if (img>0){
        imgl=valor_inductancia(img, frec);    
    } else {
        imgc=valor_capacitancia(img, frec);
    }
    return 0;
}
void bienvenida(void){
    printf("Bienvenido al programa\n");
}
float ingreso_real(void){
    float real;
    printf("Por favor, ingrese la parte real. Si no hay parte real, colocar 0\n");
    scanf("%f", &real);
    return(real);
}
float ingreso_img(void){
    float img;
    printf("Por favor, ingrese la parte imaginaria. Si no hay parte imaginaria, colocar 0\n");
    scanf("%f", &img);
    return(img);
}
float ingreso_frec(void){
    float frec;
    printf("Por favor, ingrese la frecuencia de trabajo\n");
    scanf("%f", &frec);
    return(frec);
}
float valor_resistencia(float real){
    if (real!=0) {
        printf("la resistencia es de: %f ohms\n", real);
    } else {
        printf("no hay resistencia\n");
    }
}
float valor_inductancia(float img, float frec){
    float imgl;
    if (img !=0){
        imgl= img/(2*PI*frec);
        printf("el valor del inductor es de: %f H\n", imgl);
    } else {
        printf("no hay parte imaginaria\n");
    }
}
float valor_capacitancia(float img, float frec){
    float imgc;
    if (img !=0){
        imgc = img/(2*PI*frec);
        printf("el valor del capacitor es de: %f F\n", imgc);
    } else {
        printf("no hay parte imaginaria\n");
    }
}