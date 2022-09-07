#include <stdio.h>
#include <math.h>


int main(){

    int A=17, B=15, C=10, kichigi, kattasi;

    if((A+B)>(A+C)&&(B+C)) kattasi=A+B;
    if((A+C)>(A+B)&&(B+C)) kattasi=A+C;
    if((B+C)>(B+A)&&(C+A)) kattasi=B+C;


    printf("Nastija: %d\n", kattasi);
   

    return 0;
}