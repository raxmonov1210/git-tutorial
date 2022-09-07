#include <stdio.h>
#include <math.h>
int main(){
    double n=2, x=0.9, n1=1, S=0;
    
    for(double i=1;i<=n;i++){
       n1*=pow(x, i);
       S-=pow(x, i)*pow((-1), i)/i;

    }
    printf("S=%lf",S);
    return 0;
}

