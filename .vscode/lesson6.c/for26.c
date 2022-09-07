#include <stdio.h>
#include <math.h>
int main(){
    double n=2, x=0.9, n1=-1, S=x;
    
    for(double i=1;i<=n;i++){
       n1+=2;
       printf("n1: %lf\n", n1);
       S+=pow(x, (2*i+1))*pow((-1), i)/n1;

    }
    printf("S=%lf",S);
    return 0;
}

