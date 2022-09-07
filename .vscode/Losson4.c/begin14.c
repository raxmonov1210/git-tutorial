#include <stdio.h>
#include <math.h>
#include <stdbool.h>
// 14-misol

int main(){

   
    double L=18, pi=3.14, R, S;
    
    R=L/(2*pi);
    S=pi*pow(R,2);


   printf("R: %lf\n", R);
   
   printf("S: %lf\n", S);

    return 0;
}