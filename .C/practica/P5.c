#include <stdio.h>

int main (void) {
    int n=1, i=1;
    for (i; i<=10; i++) {
        printf("%d x %d = %d\n", n, i, n*i);
        if (i==10 && n<9) {
            n+=1;
            i=1;
        }
    }
}