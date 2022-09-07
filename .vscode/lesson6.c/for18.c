#include <stdio.h>
#include <math.h>

int main(){

    double a=2, n=10, yigindi=1;

    for(double i=1; i<n; i++){
        yigindi+=pow(a, i)*pow((-1), i);
        
    }
    printf("Natija: %lf\n", yigindi);
    
    return 0;
}