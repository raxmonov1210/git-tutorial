#include <stdio.h>
#include <math.h>

// scanf va printf operatoridan foydalanganda
// int uchun %d
// double %lf
// float uchun %f
// sqrt sonning ildizini topish uchun ishlatiladi
// P=n*ildizda(y^3+1.09g)





int main() {

  double y=5, g=4, n=2,  P;

  P=n*sqrt(pow(y, 3)+1.09*g);

  printf("natija: %lf\n", P );


 return 0;
}
