#include <string.h>
#include <stdio.h>
#include <stdbool.h>

int main() {
  char name[100];
  char seen[26] = {0};
  int found = 0;
  scanf("%s", name);
  size_t len = strlen(name);
  for (int i = 0; i<(int)len; i++) {
    bool is_found = false;
    for ( int j=0; j<26; j++) {
      if (seen[j] == name[i]) {
        is_found = true;
        break;
      }
    }
    if (is_found == false) {
    seen[found] = name[i];
    found++;
    }
  }
  if (found % 2 == 0) {
    printf("CHAT WITH HER!");
  }
  else {
    printf("IGNORE HIM!");
  }
  return 0;
}
