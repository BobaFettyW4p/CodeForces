#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
   char first[100], second[100];
   scanf("%s",first);
   scanf("%s",second);
   size_t len = strlen(first);
   printf("%d", len);
   int sol = 0;
  for (int i=0; i < len; i++) {
    if (tolower(first[i]) == tolower(second[i])) {
      continue;
    };
    if (tolower(first[i]) < tolower(second[i])) {
      sol = -1;
      break;
    };
    if (tolower(first[i]) > tolower(second[i])) {
      sol = 1;
      break;
    };
  }
  printf("%d",sol);
  return 0;
}
