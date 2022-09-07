#include <stdio.h>
#include <stdbool.h>
#include <math.h>


void MEAN(double son, double son2){
    printf("Arifmetik: %lf\n", (son+son2)/2);
    printf("Geometrik: %lf\n\n", sqrt(son*son2));
}

int main()
{
    double A=1.1, B=2, C=3.7, D=3.1;
    
    MEAN(A, B);
    MEAN(A, C);
    MEAN(A, D);

    return 0;
}