#include <stdio.h>
#include <math.h>

// scanf va printf operatoridan foydalanganda
// int uchun %d
// double %lf
// float uchun %f
// sqrt sonning ildizini topish uchun ishlatiladi
// N=3*y^3+sqrt(y+1)





int main() {

  double y=5, N;

  N=3*pow(y, 2)+sqrt(y+1);

  printf("natija: %lf\n", N );


 return 0;
}
