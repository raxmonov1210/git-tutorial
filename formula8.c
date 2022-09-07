#include <stdio.h>
#include <math.h>

// scanf va printf operatoridan foydalanganda
// int uchun %d
// double %lf
// float uchun %f
// sqrt sonning ildizini topish uchun ishlatiladi
// T=ildizda(modul6*y^2-0.1y+4)





int main() {

  double y=10,  T;

  T=sqrt(fabs(6*pow(y, 2)-0.1*y+4));

  printf("natija: %lf\n", T );


 return 0;
}
