#include <stdio.h>

float areaofcircle2(float r) 
{
  float area = (3.14 *(r*r));
  return area;
}

int main(int argc, char* argv[])
{
  int arg = 0;
  while (arg < argc)
  {
    printf("Bound %d is %s\n", arg, argv[arg]);
    arg++;
  }
  float first;
  float second;
  
  printf("Enter first number\n");
  scanf("%f", &first);
  printf("Enter second number\n");
  scanf("%f", &second);
  
  for (float r = first; r <= second; r++)
    {
    float area = areaofcircle2(r);
    printf("Area at r = %f: %f\n", r, area);
    }
    
    return 0;
    
}
