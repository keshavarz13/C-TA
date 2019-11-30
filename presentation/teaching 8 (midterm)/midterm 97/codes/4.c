#include <stdio.h>

int power(int, int);

int main() {
  int n;
  int flag = 1 ; 

  scanf("%d", &n);

  for (int i = 1; i * i * i * i  <= n; i++) {
    for (int j = 2; j * j <= n; j++) {
      for (int k = 2; k <= n; k++) {
        int p = power(j, k);
        if (power(i, p) == n) {
          printf("a = %d b = %d c = %d\n", i, j, k);
          flag = 0 ; 
        }
      }
    }
  }
  if( flag ==1 )
  printf("There is no a^b^c\n");
}

int power(int a, int b) {
  if (a == 0) {
    return 0;
  }

  int r = 1;

  for (int i = 0; i < b; i++) {
    r = r * a;
  }

  return r;
}