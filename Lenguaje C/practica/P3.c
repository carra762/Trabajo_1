#include <stdio.h>

int main (void) {
    int n; 
    printf("ingrese el número que quiera\n");
    scanf("%d", &n);
    if(n>=1 && n<=10) {
        printf("Esta entre 1 y 10\n");
    } else {
        printf("no está entre 1 y 10\n");
    }
}