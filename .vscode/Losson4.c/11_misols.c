#include <stdio.h>
#include <math.h>
#include <stdbool.h>
// 2-misol

int main(){

   
    int son=123, birinchi_xona, ikkinchi_xona, uchinchi_xona, yigindi;
    birinchi_xona = son/100;
    ikkinchi_xona = (son-(birinchi_xona*100))/10;
    uchinchi_xona = son%10;

    yigindi = birinchi_xona + ikkinchi_xona + uchinchi_xona;
   
   printf("Natija: %d\n", yigindi);
   
   
    return 0;
}