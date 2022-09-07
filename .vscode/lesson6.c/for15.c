#include <stdio.h>
#include <math.h>

int main(){

    double a=5, n=2, kopaytma=1;

    for(double i=1; i<n; i++){
        kopaytma*=pow(a, i);
    }

    printf("Natija: %lf\n", kopaytma);

    return 0;
}