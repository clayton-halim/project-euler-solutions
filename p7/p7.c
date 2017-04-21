#include <stdlib.h>
#include <stdbool.h>

bool is_prime(int n) {
  for (int i = 2; i * i <= n; ++i) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}


int main() {
  int count = 0;
  int x = 2;
  while (count < 10001) {
    if (is_prime(x)) {
      ++count;
    }
    ++x;
  }
  
  printf("%d\n", x - 1);
}