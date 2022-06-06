#include <stdio.h>

int main(){
	int a[4] = {12, 13, 14, 15};
	int *j;
	j = &a[4]; // point to the last element 
	j = j - 4;
	
	printf("Address = %u", j);
	printf("\nvalue = %d", *j);
	return 0;
}