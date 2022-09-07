#include <stdio.h>
#include <math.h>


int main(){

    int A=17, B=15, C=10, kichigi;

    if((A>B)&&(B>C)) kichigi=C;
    if((B>A)&&(A>C)) kichigi=C;
    if((C>A)&&(A>B)) kichigi=B;
    if((A>C)&&(C>B)) kichigi=B;
    if((B>C)&&(C>A)) kichigi=A;
    if((C>B)&&(B>A)) kichigi=A;
    

    printf("Nastija: %d\n", kichigi);
   

    return 0;
}