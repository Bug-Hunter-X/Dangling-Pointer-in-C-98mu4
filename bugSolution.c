#include <stdio.h>

int main() {
  int *ptr;
  int x = 10;

  ptr = malloc(sizeof(int));
  if (ptr == NULL) {
    fprintf(stderr, "Memory allocation failed\n");
    return 1;
  }

  *ptr = 20;
  printf("%d\n", *ptr);

  free(ptr);
  ptr = NULL;

  return 0;
}
