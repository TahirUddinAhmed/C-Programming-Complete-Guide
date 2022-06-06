#include <stdio.h>

int main(void){
	int number[] = {4, 6, 7, 2, 5, 0};
	
	printf("%d\n", *number);
	printf("%d\n", *(number+1));
	printf("%d\n", *(number+2));
	printf("%d\n", *(number+3));
	printf("%d\n", *(number+4));
	printf("%d\n", *(number+5));
}