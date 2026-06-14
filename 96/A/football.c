#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
  char line[100];
  scanf("%s", line);
  char team;
  int count = 0;
  bool dangerous = false;
  size_t len = strlen(line);
  for (int i=0; i<len; i++) {
    if (team == line[i]) {
      count += 1;
      if (count >=7) {
        dangerous = true;
      }
    }
    else {
      team = line[i];
      count = 1;
    }
  } 
  if (dangerous == true) {
    printf("YES");
  }
  else {
    printf("NO");
  }
  return 0;
}
