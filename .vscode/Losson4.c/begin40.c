#include <stdio.h>
#include <math.h>
#include <stdbool.h>
// 40-misol

int main(){

   
    double A1=2, B1=3, C1=4, A2=7, B2=4, C2=3, x, y, D;

    D=(A1*B2-A2*B1);
    x=(C1*B2-C2*B1)/D;
    y=(A1*C2-A2*C1)/D;
    

   printf("Natija: %lf\n", x);
   printf("Natija: %lf\n", y);
   printf("Natija: %lf\n", D);
   
    return 0;

    
}