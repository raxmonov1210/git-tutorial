#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// 24-misol, for
int main(){

    int n=9, a=2;
    double S=1;
    int natija = 1, iterator=0;

    for(int i=0; i<n; i+=2){

        natija = 1;
        for(int j=1; j<=i; j++){
            natija *= j;
        }
        printf("Natija: %d\n", natija);

        S += pow(-1, iterator)*(pow(a, i)*1.0)/natija;
        printf("Natija(Sum): %lf\n", S);

        iterator++;
    }

    return 0;
}