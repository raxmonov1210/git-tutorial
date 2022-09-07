#include <stdio.h>
#include <math.h>

// scanf va printf operatoridan foydalanganda
// int uchun %d
// double %lf
// float uchun %f
// sqrt sonning ildizini topish uchun ishlatiladi
// N=3*y^3+sqrt(pow(y^3+1)





int main() {

  double y=5, Z;

  Z=3*pow(y, 3)+sqrt(pow(y, 3)+1);

  printf("natija: %lf\n", Z );


 return 0;
}
