#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare_chars(const void *a, const void *b) {
  return (*(char*)a - *(char*)b);
}

int main() {
  char line[256];
  scanf("%s", line);
  char nums[256];
  int p = 0;
  size_t len = strlen(line);
  for (int i=0; i<len; i+=2) {
    nums[p] = line[i];
    p++;
  }
  nums[p] = '\0';
  int size = sizeof(nums)/sizeof(nums[0]);
  qsort(nums, p, sizeof(char), compare_chars);
  nums[p] = '\0';
  for (int i = 0; i<p; i++) {
    printf("%c", nums[i]);\
    if (i < p -1) {
      printf("+");
    }
  }
  return 0;
}
