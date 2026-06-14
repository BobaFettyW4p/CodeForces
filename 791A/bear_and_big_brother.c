#include <stdio.h>

int main() {
  int limak;
  int bob;
  scanf("%d %d", &limak, &bob);
  int years = 0;
  while (limak <= bob) {
    years += 1;
    limak *= 3;
    bob *=2;
  }
  printf("%d", years);
  return 0;
}
