#include <stdio.h>
#include<math.h>

// scanf va printf operatoridan foydalanganda
// int uchun %d
// double %lf
// float uchun %f
// sqrt sonning ildizini topish uchun ishlatiladi
// R=3*t^2+3*l^5+4.9


int main(){


 double t=2, l=3, R;

 R = 3*pow(t, 2)+3*pow(l, 5)+4.9;

 printf("natija: %lf\n", R );


 return 0;
}