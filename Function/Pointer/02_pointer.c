#include <stdio.h>

int main(){
	int i = 3, *j, **k;
	
	j = &i;
	k = &j;
	
	// pointer 
	printf("Value of i is %d\n", i);
	printf("Address of i is %d\n", &i);
	printf("Address of i is (using Pointer) %d\n", j);
	printf("Address of j is %d\n", &j);
	printf("Address of j(using Pointer) is %d\n", k);
	
	return 0;
}