#include <stdio.h>
#include <math.h>


int main(){

    int A=17, B=15, C=16, ortacha;

    if((A>B)&&(B>C)) ortacha=B;
    if((B>A)&&(A>C)) ortacha=A;
    if((C>A)&&(A>B)) ortacha=A;
    if((A>C)&&(C>B)) ortacha=C;
    if((B>C)&&(C>A)) ortacha=C;
    if((C>B)&&(B>A)) ortacha=B;
    

    printf("Nastija: %d\n", ortacha);
   

    return 0;
}