#include <stdio.h>
int main(){
    double n,n2=1,S=1;
    printf("n=");
    scanf("%lf",&n);
    for(double i=1;i<=n;i++){
        n2*=i;
        S+=1/n2;
    }
    printf("S=%lf",S);
    return 0;
}

