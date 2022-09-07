#include <stdio.h>
#include <math.h>
int main(){
    double n=4, n2=1,S=1, x=2, n3=1;
    
    for(double i=1;i<=n;i++){
        n2=pow(x, i);
        n3*=i;
        S+=n2/n3;
    }
    printf("S=%lf",S);
    return 0;
}

