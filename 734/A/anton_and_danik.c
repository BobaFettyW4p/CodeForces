#include<stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  char s[n];
  scanf("%s",s);
  int anton = 0;
  int danik = 0;
  for (int i=0; i<n; i++) {
    if (s[i] == 'A') {
       anton +=1;
       }
    else {
       danik += 1;
       }
  }
  if (anton > danik) {
       printf("Anton");
       }
  else if (danik > anton) {
       printf("Danik");
       }
  else {
       printf("Friendship");
       }
  return 0;
  }
