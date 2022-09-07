#include <stdio.h>
#include <math.h>

// scanf va printf operatoridan foydalanganda
// int uchun %d
// double %lf
// float uchun %f
// sqrt sonning ildizini topish uchun ishlatiladi
// G=n*(y+3.5)+ildizda(y)





int main() {

  double y=5, n=7, G;

  G=n*(y+3.5)+sqrt(y);

  printf("natija: %lf\n", G );


 return 0;
}
