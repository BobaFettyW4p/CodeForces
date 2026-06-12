#include <stdio.h>
#include <string.h>

int main() {
  int n;
  scanf("%d\n", &n);
  int sol = 0;
  for (int i = 0; i < n; i++) {
    char word[4];
    scanf("%4s", word);
    if (strcmp(word, "++X") == 0 || strcmp(word, "X++") == 0 ) {
      sol++;
    }
    else {
      sol--;
    }
  }
  printf("%d", sol);
  return 0;
}
