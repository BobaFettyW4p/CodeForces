#include <stdio.h>

int main() {
  int n, k;
  scanf("%d %d", &n, &k);
  int arr[n];
  int sol = 0;
  for (int i=0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  int score = arr[k-1];
  for (int j=0; j < n; j++) {
    if (arr[j] >= score && arr[j] > 0) {
      sol ++;
    }
}
  printf("%d", sol);
  return 0;
}
