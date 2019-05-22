#include <stdio.h>

int main(){

int a = 7;
float b = 3.98;
double c = 1.4837;
char d = 'd';

	printf("int size is %d bytes,\nfloat size is %d bytes,\ndouble size is %d bytes,\nchar size is %d bytes\n", sizeof(a),sizeof(b), sizeof(c), sizeof(d));

	return 0;
}
