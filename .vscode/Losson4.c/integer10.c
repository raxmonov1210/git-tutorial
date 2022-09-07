#include <stdio.h>
#include <math.h>
#include <stdbool.h>
// 10-misol

int main(){

   
    int son=123, birliklar_xonasidagi_raqam, onliklar_xonasidagi_raqam, yuzliklar_xonasidagi_raqam;

    yuzliklar_xonasidagi_raqam=son/100; 
    onliklar_xonasidagi_raqam=(son-(yuzliklar_xonasidagi_raqam*100))/10;
    birliklar_xonasidagi_raqam=son%10;
   


   printf("Natija: %d\n", birliklar_xonasidagi_raqam);
   printf("Natija: %d\n", onliklar_xonasidagi_raqam);
   
    return 0;

    
}