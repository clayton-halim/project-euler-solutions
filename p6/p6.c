#include <stdlib.h>

int main() {
  int n = 100;
  int sum100 = (n * (n + 1)) / 2;
  int sum_square100 = (n * (n + 1) * (2 * n + 1)) / 6;
  printf("%d\n", (sum100 * sum100) - sum_square100);
}