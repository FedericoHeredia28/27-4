#include "stdio.h"
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  for (int i = 0; ;n-1) {
    for (int j = 0; ; n-1) {
      if ((i + j) % 2 == 0) {
        printf("  ");
      }
      else  printf("*");
    }
  }

  return 0;
}
