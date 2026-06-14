#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  char stones[n];
  scanf("%s", stones);
  size_t count = 0;
  for (int i=1; i<n; i++) {
    if (stones[i] == stones[i-1]) {
      count ++;
    }
  }
  printf("%d", count);
  return 0;
}
