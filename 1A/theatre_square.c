#include <stdio.h>
#include <math.h>

int main() {
  long long n,m,a;
  scanf("%lld %lld %lld", &n, &m, &a);
  long long h = (n+a-1)/a;
  long long v = (m+a-1)/a;
  printf("%lld", h*v);
  return 0;
}
