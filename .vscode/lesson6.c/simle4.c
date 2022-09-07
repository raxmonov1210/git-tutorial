#include <stdio.h>
#include <stdbool.h>
#include <math.h>

double son3 = 5;

double orta(double son, double son2){
    printf("Sonlar: %lf, %lf\n", son, son3);

    return (son+son2)/2;
}

int main()
{
    double A=1.1, B=2, C=3.7, D=3.1;
    printf("Natija: %lf, %lf", orta(A, B), son3);

    return 0;
}