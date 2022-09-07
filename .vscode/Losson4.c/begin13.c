#include <stdio.h>
#include <math.h>
#include <stdbool.h>
// 13-misol

int main(){

   
    double R1=4, R2=3, pi=3.14, S1, S2, S3;
    
    S1=pi*R1;
    S2=pi*R2;
    S3=pi*(R1-R2);


   printf("S1: %lf\n", S1);
   
   printf("S2: %lf\n", S2);

   printf("S3: %lf\n", S3);

    return 0;
}