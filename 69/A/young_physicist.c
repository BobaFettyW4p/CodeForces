#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int x[n], y[n], z[n];
  for (int i=0; i<n; i++) {
    scanf("%d %d %d", &x[i], &y[i], &z[i]);
  }
  int total_x = 0;
  int total_y = 0;
  int total_z = 0;
  for (int j=0; j<n; j++) {
    total_x += x[j];
    total_y += y[j];
    total_z += z[j];
  }
  if (total_x ==0 && total_y == 0 && total_z == 0) {
    printf("YES");
  }
  else {
    printf("NO");
  }
  return 0;
}
