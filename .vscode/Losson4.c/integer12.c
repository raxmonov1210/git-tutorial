#include <stdio.h>
#include <math.h>
#include <stdbool.h>
// 12-misol

int main(){

   
    int son=891;
    
    int birinchi = 891 / 100 % 100;
    int ikkinchi = 891 % 100;
    int uchinchi = 891 % 10;


   printf("Natija: %d%d%d\n", uchinchi, ikkinchi, birinchi);
   
    return 0;

    
}