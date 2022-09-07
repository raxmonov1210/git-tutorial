#include <stdio.h>
#include <math.h>

// scanf va printf operatoridan foydalanganda
// int uchun %d
// double %lf
// float uchun %f
// sqrt sonning ildizini topish uchun ishlatiladi
// F=2*sin(0.214*y^5+1)





int main() {

  double y=10,  F;

  F=2*sin(0.214*pow(y, 5)+1);

  printf("natija: %lf\n", F );


 return 0;
}
