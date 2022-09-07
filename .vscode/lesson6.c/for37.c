#include <stdio.h>
#include <math.h>
int main() {

double N=4, S=0;
for(double i=1;i<=N;i++){
    printf("i: %lf\n", i);
    S+=pow(i, N);
}
    printf("yigindi: %lf\n", S);

return 0;
}