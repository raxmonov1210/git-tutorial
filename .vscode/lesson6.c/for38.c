#include <stdio.h>
#include <math.h>
int main() {

double N=4, K=1, S=1;
for(double i=2; i<=N;i++){

  
    printf("i: %lf\n", i);
    for (double k=1;k<N;K+=2){
    S+=pow(i, N-K);
    } 
}
    printf("yigindi: %lf\n", S);

return 0;
}