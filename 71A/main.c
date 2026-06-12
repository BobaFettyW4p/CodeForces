#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#define MAX_WORD_SIZE 10

int main(){
  int n;
  scanf("%d\n", &n);
  char word[101];
  for (int i=0; i<n; i++) {
    scanf("%100s", word);
    size_t len = strlen(word);

    if (len > MAX_WORD_SIZE) {
    printf("%c%zu%c\n", word[0], len -2, word[len-1]);
    }
    else {
      printf("%s\n", word);
    }
  }
  return 0;
}
