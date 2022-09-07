#include <stdio.h>
#include <math.h>

// scanf va printf operatoridan foydalanganda
// int uchun %d
// double %lf
// float uchun %f
// sqrt sonning ildizini topish uchun ishlatiladi
// E=ildizda(modul3*y^2+0.5*y+4)





int main() {

  double y=10,  E;

  E=sqrt(fabs(3*pow(y, 2)+0.5*y+4));

  printf("natija: %lf\n", E );


 return 0;
}
