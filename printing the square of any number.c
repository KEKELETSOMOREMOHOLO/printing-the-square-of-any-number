#include<stdio.h>
#include<math.h>

int main()
{
  int a;
  
  printf("Please enter a number to check its square: \n");
  scanf("%d",&a);
  
  int square = a*a;
  printf("The square of the number is: \n %d",square);
  return 0;
}
