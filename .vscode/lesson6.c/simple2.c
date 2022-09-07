#include <stdio.h>
#include <stdbool.h>
#include <math.h>


double orta(double son, double son2){
    printf("Sonlar: %lf, %lf\n", son, son2);

    return (son+son2)/2;
}

int main()
{
    double A=1.1, B=2, C=3.7, D=3.1;
    printf("Natija: %lf", orta(A, B));

    return 0;
}