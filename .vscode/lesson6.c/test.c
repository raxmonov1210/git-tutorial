#include <stdio.h>
#include <math.h>
int main(){
    double n=1, n2=1,S=1, x=2, n3=1,x2=1;
    
    for(double i=1;i<=n;i++){
        n2=pow(x, i);
        x2=x2*i;
        S = pow(-1, i)*pow(x,(2*i+1))/x2;
    }
    printf("S=%lf",S);
    return 0;
}
