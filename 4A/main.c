#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int sz = atoi(argv[1]);
  if (sz < 2){
    printf("NO");
  }

  if (sz % 2 == 0) {
    printf("YES");
  }
  else {
    printf("NO");
  }
  return 0;
}
