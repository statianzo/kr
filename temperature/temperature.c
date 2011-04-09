#include <stdio.h>

main() {
  int lower = 0,
      upper = 300,
      step = 20;
  float fahr = lower, cel;

  while (fahr <= upper) {
    cel = 5.0 * (fahr-32.0) / 9.0;
    printf("%3.0f %6.1f\n", fahr, cel);
    fahr = fahr + step;
  }
}
