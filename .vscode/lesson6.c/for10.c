#include <stdio.h>

int main(){

    double S=0, n=15;

    for(int i=1; i<n; i++){
        S += 1.0/i;
    }

    printf("Natija: %lf", S);

    return 0;
}