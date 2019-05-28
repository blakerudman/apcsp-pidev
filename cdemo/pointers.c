#include <stdio.h>

int main()
{
  
  int a;
  float d;
  float e;
  int* ptrtoa;
  float* fpoint1;
  float* fpoint2;

  fpoint1 = &d;
  fpoint2 = &e;

  *fpoint1 = 1.54;
  *fpoint2 = 7.89;

  printf("The value of d is  %f\n", *fpoint1);
  printf("The value of e is  %f\n", *fpoint2);

  float temp = *fpoint2;
  *fpoint2 = *fpoint1;
  *fpoint1 = temp;

  printf("The value of d is now %f\n", *fpoint1);
  printf("The value of e is now %f\n", *fpoint2);

}
