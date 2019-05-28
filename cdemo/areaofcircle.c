 #include <stdio.h>

void areaofcircle(int r){

float area = 3.14*(r*r);
printf("Circle with radius %d has area of %f \n", r, area);

}

int main(void) {
  for (int x=3; x<13; x++){

      areaofcircle(x);

  }

return 0;

}
