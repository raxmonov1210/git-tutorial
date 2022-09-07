#include <stdio.h>
#include <math.h>

// scanf va printf operatoridan foydalanganda
// int uchun %d
// double %lf
// float uchun %f
// sqrt sonning ildizini topish uchun ishlatiladi
// S=ildizda(cos(4y^2+7.151))





int main() {

  double y=8,  S;

  S=sqrt(cos(4*pow(y, 2))+7.151);

  printf("natija: %lf\n",S);


 return 0;
}
