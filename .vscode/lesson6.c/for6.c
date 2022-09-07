#include <stdio.h>

int main() {
  double i, narxi=2800;
  
  for (double i = 1.2; i <=2; i = i + 0.2) {
    printf("%.1lf kg konfet %.1lf so'm\n", i, i*narxi);
  }
  
  return 0;
}