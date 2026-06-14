#include <stdio.h>
#include <ctype.h>

int main() {
  char line[1000];
  scanf("%s", line);
  line[0] = toupper((unsigned char)line[0]);
  printf("%s", line);
  return 0;

}
