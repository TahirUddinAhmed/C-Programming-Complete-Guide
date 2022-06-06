#include <stdio.h>

int main(){
	int i = 3, *x;
	float j = 1.5, *y;
	char k = 'c', *z;
	
	x = &i;
	y = &j;
	z = &k;
	printf("The original address of i is %u\n", x);
	x++;
	printf("New address of i is %u\n", x);
	return 0;
}
