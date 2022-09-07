#include <stdio.h>
#include <math.h>
#include <stdbool.h>
// 5-misol

int main(){

   
    int a=4, b=3, c=4, V, S;

    V=a*b*c;
    S=2*((a*b)+(b*c)+(a*c));


   printf("Natija S: %d\n", S);
   printf("Natija V: %d\n", V);
   
    return 0;
}