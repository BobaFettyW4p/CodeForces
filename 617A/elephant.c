#include <stdio.h>

int main() {
  int x;
  scanf("%d", &x);
  int mod = x % 5;
  if (mod == 0) {
    printf("%d", x/5);
  }
  else {
    printf("%d", x/5 + 1);
  }
  return 0;
}
