#include <stdio.h>
#include <math.h>

int main(){

    double a=2, n=10;

    for(double i=1; i<n; i++){
        printf("Natija: %.0lf\n", pow(a, i));
    }

    
    return 0;
}