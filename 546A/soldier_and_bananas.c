#include <stdio.h>

int main() {
  int k,n,w;
  scanf("%d %d %d", &k, &n, &w);
  int total_cost = 0;
  for (int i =1; i < w+1; i++) {
    total_cost += i*k;
  }
  if (n > total_cost) {
    printf("0");
  }
  else {
    printf("%d", total_cost - n);
  }
  return 0;
}
