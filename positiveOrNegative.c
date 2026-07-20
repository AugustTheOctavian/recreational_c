#include <stdio.h>
int main() {
  int a;
  printf("enter a; ");
  scanf("%d", &a);
  if (a == 0) {
    printf("Neither positive nor negative\n");
  } else if (a < 0) {
    printf("Negative\n");
  } else {
    printf("Positive\n");
  }
  return 0;
}