#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
  char s[100];
  scanf("%s", s);
  int lower = 0;
  int upper = 0;
  size_t len = strlen(s);
  for (int i=0; i<len; i++) {
    if (s[i] == toupper(s[i])) {
      upper += 1;
    }
    else {
      lower += 1;
    }
  }
  if (upper > lower) {
    for (int j=0; j< len; j++) {
      s[j] = toupper(s[j]);
    }
  }
  else {
    for (int k=0; k<len; k++) {
      s[k] = tolower(s[k]);
    }
  }
  printf("%s",s);
  return 0;
}
