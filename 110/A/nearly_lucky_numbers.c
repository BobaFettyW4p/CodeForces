#include <stdio.h>
#include <stdbool.h>

int main() {
  long long n;
  scanf("%lld", &n);
  int lucky = 0;
  long long temp = n;
  while (temp > 0) {
    int digit = temp % 10;
    temp /= 10;
    if (digit == 4 || digit == 7) {
      lucky +=1;
    }
  }
  if (lucky == 4 || lucky == 7) {
    printf("YES");
  }
  else {
    printf("NO");
  }
  return 0;
}
