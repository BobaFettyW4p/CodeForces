#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define ROWS 5
#define COLS 5

int main() {
  int matrix[ROWS][COLS];
  for (int i=0; i< ROWS; i++) {
    for (int j=0; j<COLS; j++) {
      scanf("%d", &matrix[i][j]);
    }
  }
  for (int i=0; i<ROWS; i++) {
    for (int j=0; j<COLS; j++) {
      if (matrix[i][j] == 1) {
        int h = abs(i-2);
        int v = abs(j-2);
        printf("%d", h + v);
      }
    }
  }
  return 0;
}
