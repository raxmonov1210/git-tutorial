#include <stdio.h>
#include <math.h>


int main(){

    double x=-8, natija;
    if(x<=0) natija=-x;
    if((0<x)&&(x<2)) natija=pow(x, 2);
    if(x>=2) natija=4;

    printf("Natija: %lf\n", natija);



    
   

    return 0;
}