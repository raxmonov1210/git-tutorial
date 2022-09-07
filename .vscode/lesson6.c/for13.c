#include <stdio.h>
#include <math.h>

int main(){

    double S=1, n=4;

    for(double i=1; i<n; i++){
        S -= pow((-1), i)*(1.0+i/10);
    }

    printf("Natija: %lf", S);

    return 0;
}