/* Escribir un programa que ingresada una tensión y una corriente (con su modulo y 
ángulo) y la frecuencia de trabajo, informe el valor de la impedancia (parte real y parte 
imaginaria, y luego el valor de los componentes asociados, resistor y capacitor o 
inductor según corresponda. Para este programa deberá utilizar lo realizado en el punto 
anterior como subprograma.
*/

#include <stdio.h>
#include <math.h>
#define PI 3.14159265

void bienvenida(void);
float ingreso_voltaje(void);
float ingreso_angulo(void);
float ingreso_corriente(void);
float ingreso_frec(void);
float modulo(float, float);
float fase(float, float);
float calculo_real(float, float);
float calculo_imaginario(float, float);
void valor_resistencia(float);
float valor_inductancia(float, float, float);
float valor_capacitancia(float, float, float);

int main (void){
    float vrms, angv, irms, angc, frec, Za, Zm, real, img, res, ind, cap;
    bienvenida();
    vrms=ingreso_voltaje();
    angv=ingreso_angulo();
    irms=ingreso_corriente();
    angc=ingreso_angulo();
    frec=ingreso_frec();
    Zm=modulo(vrms, irms);
    Za=fase(angv, angc);
    real=calculo_real(Zm, Za);
    img=calculo_imaginario(Zm, Za);
    valor_resistencia(real);
    if (img>0) {  
        ind=valor_inductancia(img, frec, real);
    } else {
        cap=valor_capacitancia(img, frec, real); 
    }
    return 0;
}
void bienvenida(void){
    printf("Bienvenido al programa\n");
}
float ingreso_voltaje(void){
    float vp, vrms;
    printf("Por favor, ingrese el voltaje\n");
    scanf("%f", &vp);
    vrms = vp/sqrt(2);
    return(vrms);
}
float ingreso_angulo(void){
    float ang;
    printf("Por favor, ingrese el angulo\n");
    scanf("%f", &ang);
    return(ang);
}
float ingreso_corriente(void){
    float ip, irms;
    printf("Por favor, ingrese la corriente\n");
    scanf("%f", &ip);
    irms = ip/sqrt(2);
    return(irms);
}
float ingreso_frec(void){
    float frec;
    printf("Por favor, ingrese la frecuencia de trabajo\n");
    scanf("%f", &frec);
    return(frec);
}
float modulo(float vrms, float irms){
    float Zm;
    Zm= (vrms/irms);
    return (Zm);
}
float fase(float angv, float angc){
    float Za;
    Za= (angv/angc);
    return (Za);
}
float calculo_real(float Zm, float Za){
    float real;
    real= Zm*cos(Za * (PI/180));
    return (real);
}
float calculo_imaginario(float Zm, float Za){
    float img;
    img = Zm*sin(Za * (PI/180));
    return (img);
}
void valor_resistencia(float real){
    if (real!=0){
        printf("la resistencia es de %f ohms\n", real);
    } else {
        printf("no hay resistencia\n");
    }
}
float valor_inductancia(float img, float frec, float real){
    float ind;
    ind = (img/(2*PI*img*frec))*100;
    printf ("el inductor tiene un valor de %f mH\n", ind);
    printf("la impedancia es de %f + J %f\n", real, img);
    return (ind);
}  
float valor_capacitancia(float img, float frec, float real){
    float cap;
    cap = (-1/(2*PI*img*frec))*100000;
    printf ("el inductor tiene un valor de %f uF\n", cap);
    printf("la impedancia es de %f - J %f\n", real, img);
    return (cap);
}