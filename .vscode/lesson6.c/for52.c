#include <stdio.h>

int main() {
  double i, narxi=2800;
  
  for (double i = 0.1; i < 1.1; i = i + 0.1) {
    printf("%lf kg konfet %.1lf so'm\n", i, i*narxi);
  }
  
  return 0;
}