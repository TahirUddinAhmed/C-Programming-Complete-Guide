#include <stdio.h>

int main(void){
	int x = 3, y, z; 
	y = x = 10; 
	z = x < 10; 
	printf("x = %d\t y = %d\t z = %d\n", x, y, z);
}