#include <stdio.h>
int main()

{
  int a, b;

  printf("enter a : ");
  scanf("%d", &a);
  printf("enter b : ");
  scanf("%d", &b);
  if (a == b) {
    printf("a and b are equal\n");

  } else {
    printf("a and b are not equal\n");
  }
  return 0;
}