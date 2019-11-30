#include <stdio.h>

int T(int, int);

int main() {
  int x1, x2, n;

  scanf("%d %d %d", &x1, &x2, &n);

  int z = 0;
  for (int i = x1; i <= x2; i++) {
    z += T(n, i);
  }
  printf("%d\n", z);
}

int T(int n, int x) {
  if (n == 0) {
    return 1;
  }

  if (n == 1) {
    return x;
  }

  return x * T(n - 1, x) + T(n - 2, x);
}
