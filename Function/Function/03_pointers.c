// pointers IN c 
#include <stdio.h>

int main(void){
	int n = 50;
	int *p = &n;
	int c = n;
	printf("%p\n", p);
	printf("%i\n", n);
	// size of pointer
	printf("%u\n", sizeof(p));
	// %p is used to print pointer 
	// pointer occupies 8 bytes in memory
}