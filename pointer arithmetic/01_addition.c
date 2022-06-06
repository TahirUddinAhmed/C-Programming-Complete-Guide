#include <stdio.h>

int main(){
	int a[4] = {12, 13, 14, 15};
	int *j;
	j = &a[0]; // point to the first element 
	j = j + 3;
	
	printf("Address = %u", j);
	printf("\nvalue = %d", *j);
	return 0;
}