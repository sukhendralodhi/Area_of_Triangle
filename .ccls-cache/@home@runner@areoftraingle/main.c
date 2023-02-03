#include <stdio.h>

// area = height*base/2;

int main(void) {
  int height,base,area;
  printf("Enter the hieght: ");
  scanf("%d",&height);
  printf("Enter the base: ");
  scanf("%d",&base);

  // formula 
  area = ((height*base)/2);

  printf("Area of Triangle: %d", area);
  return 0;
}