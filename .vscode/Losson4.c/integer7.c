#include <stdio.h>
#include <math.h>
#include <stdbool.h>
// 7-misol

int main(){

   
    int son=89, birinchi_xona, ikkinchi_xona, yigindi;
    
    birinchi_xona=son/10;
    ikkinchi_xona=son-birinchi_xona*10;
    yigindi=birinchi_xona+ikkinchi_xona;


   printf("Natija: %d\n", birinchi_xona);
   printf("Natija: %d\n", ikkinchi_xona); 
   printf("natija: %d\n", yigindi);
   
    return 0;

    
}