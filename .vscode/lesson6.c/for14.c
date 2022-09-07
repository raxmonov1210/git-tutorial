#include <stdio.h>
#include <math.h>

int main(){

    double n=5, son=0, natija;

    for(double i=0; i<n; i+=2){
        printf("Natija: %lf\n", i);

        
        son++;
        n+=sqrt(1+(2*i-1));
        natija=pow(n, 2);
    }
    
    printf("soni: %lf\n", son);
    printf("Yigindi: %lf\n", natija);

    return 0;
}