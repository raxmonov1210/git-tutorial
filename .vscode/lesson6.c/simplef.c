#include <stdio.h>
#include <stdbool.h>

void Power234(double son){
    printf("Natija(Son^2): %lf\n", son*son);
    printf("Natija(Son^3): %lf\n", son*son*son);
    printf("Natija(Son^4): %lf\n\n", son*son*son*son);
}

int main()
{
    double A=1.1, B=2, C=3.7;
    
    Power234(A);
    Power234(B);
    Power234(C);

    return 0;
}