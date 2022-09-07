#include <stdio.h>
#include <math.h>
int main() {
//36-misol
double N=4, K=6, S=0;
for(double i=1;i<=N;i++){
    printf("i: %lf\n", i);
    S+=pow(i, K);
}
    printf("yigindi: %lf\n", S);

return 0;
}