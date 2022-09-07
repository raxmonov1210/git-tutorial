#include <stdio.h>

int main(){

    double S=1, n=15;

    for(double i=0; i<n; i++){
        S *= (1.0+i/10);
    }

    printf("Natija: %lf", S);

    return 0;
}