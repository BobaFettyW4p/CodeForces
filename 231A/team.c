#include <stdio.h>

int main() {
  size_t n;
  scanf("%d\n", &n);
  size_t sol = 0;
  for (int i = 0; i < n; i++) {
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    int count = a + b + c;
    if (count >= 2) sol ++;
  }
  printf("%zu", sol);
  return 0;
}
