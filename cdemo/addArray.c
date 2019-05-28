#include <stdio.h>

void addArray(int arr[], int size, int inc){

for(int i = 0; i < size; i = i + inc){

arr[i] = i*i;

printf("%d\n", arr[i]);

}


}

int main()
{
  
 int data[100];

 addArray(data, 100, 1);

}
