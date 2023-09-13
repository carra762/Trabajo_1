#include <stdio.h>
#include <math.h> 

int main (void) {
    for(int i=1; i<=10; i++) {
        printf("%d ^ %d = %f\n",2, i, pow(2,i));
    }
}