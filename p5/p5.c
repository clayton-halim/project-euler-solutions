#include <stdlib.h>
#include <stdbool.h>

bool div_to_twenty(int n) {
  for (int i = 2; i <= 20; ++i) {
    if (n % i != 0) {
      return false;
    }
  }
  return true;
}

int main() {
  int x = 21;
  while (!div_to_twenty(x)) {
    ++x;
  }
  printf("%d\n", x);
}