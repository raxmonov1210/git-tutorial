#include <stdio.h>
#include <math.h>
int main(){
    double n=8, x=0.9, S=x, n1=1, a;
    
    for(double i=1;i<=n;i++){
 
       for(double j=1;j<=i;j+=2){
        
       n1=j;
       a=2*(2*i)*(2*i+1);
       }
    
      printf("a: %lf\n", a);
       printf("n1: %lf\n", n1);
                            S+=pow(x, (2*i+1))*n1;

    }
    printf("S=%lf",S);
    return 0;
}

