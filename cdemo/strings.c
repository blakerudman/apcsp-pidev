#include <stdio.h>
#include <string.h>

int main() {
  char string1[26];
  for (int i = 0; i < 26; i++){
    string1[i] = 97 + i;
  }
  char string2 [] = "abcdefghijklmnopqrstuvwxyz";
  if (strcmp(string1, string2) == 0){

     printf("string 1 and 2 are the same\n");

  }else{

     printf("tring 1 and 2 are not the same\n");

  }
  for (int i = 0; i < 26; i++){
    string2[i] = string2[i] - 32;
  }
  if (strcmp(string1, string2) == 0){

     printf("both strings are the same\n");
     
  }
  else
  {

     printf("both strings aren't the same\n");

  }
  
  printf("lower: %s\n", string1);
  printf("upper: %s\n", string2);
  strcat(string1, string2);
  printf("both: %s\n", string1);

  return 0;

}
