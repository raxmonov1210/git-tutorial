#include <stdio.h>
#include <math.h>


int main(){

    int A=12, B=15, kattasi, kichigi;

    if(A>B) kattasi=A;
    if(B>A) kattasi=B;
    if(A>B) kichigi=B;
    if(B>A) kichigi=A;
    

    printf("kattasi: %d\n", kattasi);
    printf("kichigi: %d\n", kichigi);
   

    return 0;
}