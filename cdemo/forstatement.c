#include <stdio.h>

int main(){

int input;

printf("input divident");

scanf("%d", &input);

for(int i = 1; i < 101; i++){

if(i % input == 0){

printf("%d is divisible by %d\n", i, input);

}


}


return 0;
}
