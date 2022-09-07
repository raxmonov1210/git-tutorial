#include <stdio.h>
#include <math.h>

// scanf va printf operatoridan foydalanganda
// int uchun %d
// double %lf
// float uchun %f
// sqrt sonning ildizini topish uchun ishlatiladi
// N=m^2+2.8|m|+0.55





int main() {

  double m=-10,  N;

  N=pow(m, 2)+2.8*fabs(m)+0.55;


  printf("natija: %lf\n", N );


 return 0;
}
