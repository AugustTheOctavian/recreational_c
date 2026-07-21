// to compute a rectangle's perimeter and area
#include <stdio.h>

int main() 
{
  float length, breadth, area, perimeter ;
  printf("enter length: \n");
  scanf("%f", &length);
  printf("enter breadth: \n");
  scanf("%f", &breadth);
  
  area = length * breadth;
  perimeter = 2 * (length + breadth);

  printf("Area and perimeter of length %f, breadth %f :\n",length, breadth);
  printf("AREA: %.2f\n",area);
  printf("PERIMETER: %.2f\n",perimeter);

  return 0;
}