#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

bool check_vowel(const char a) {
  char c = tolower(a);
  if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='y'){
    return true;
  } 
  else {
    return false;
  }
}

int main() {
  char s[100];
  scanf("%s", s);
  char sol[200];
  int p = 0;
  size_t len = strlen(s);
  for (int i=0; i < len; i++) {
    if (check_vowel(s[i]) == true) {
      continue;
    }
    else {
      sol[p] = '.';
      p++;
      sol[p] = tolower(s[i]);
      p++;
    }
  }
  sol[p] = '\0';
  printf("%s", sol);
  return 0;
  
}

