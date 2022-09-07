#include <stdio.h>
#include <math.h>


int main(){

    int A=17, B=15, C=10, kichigi, kattasi;

    if((A>B)&&(B>C)) kichigi=C;
    if((B>A)&&(A>C)) kichigi=C;
    if((C>A)&&(A>B)) kichigi=B;
    if((A>C)&&(C>B)) kichigi=B;
    if((B>C)&&(C>A)) kichigi=A;
    if((C>B)&&(B>A)) kichigi=A;
    if((B>A)&&(A>C)) kattasi=B;
    if((A>B)&&(B>C)) kattasi=A;
    if((C>A)&&(A>B)) kattasi=C;
    if((A>C)&&(C>B)) kattasi=A;
    if((B>C)&&(C>A)) kattasi=B;
    if((C>B)&&(B>A)) kattasi=C;



    printf("Nastija: %d\n", kichigi);
    printf("Nastija: %d\n", kattasi);
   

    return 0;
}