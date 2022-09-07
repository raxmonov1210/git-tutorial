#include <stdio.h>
#include <math.h>


int main(){

    int A=3, B=3, C=3, D=7, natija;


    if((A==B)&&(B==C)&&(A==C)) natija=4;
    if((A==C)&&(C==D)&&(A==D)) natija=2;
    if((B==C)&&(C==D)&&(B==D)) natija=1;
    if((A==B)&&(B==D)&&(A==D)) natija=3;

    printf("Natija: %d\n", natija);

    
   

    return 0;
}