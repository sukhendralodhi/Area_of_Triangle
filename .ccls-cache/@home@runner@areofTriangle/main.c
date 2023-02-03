#include <stdio.h>

// function defination 
int triangleAre() {
  int height, base, area;
  printf("Enter the height: ");
  scanf("%d",&height);
  printf("Enter the base: ");
  scanf("%d",&base);

  area = ((height*base)/2);

  printf("Area = %d",area);
}
int main(void) {
  // calling function 
  triangleAre();
  return 0;
}