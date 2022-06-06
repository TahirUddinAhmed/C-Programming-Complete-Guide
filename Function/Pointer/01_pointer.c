/*
----------- Pointer ------------------
A Pointer is a variable which stores the address of another variable.

Value at address:
================
value at address "*". it gives the value stored at a particular address.

*/

#include <stdio.h>

int main(){
	int i = 24;
	int *j = &i;
	
	printf("Value of i is %d\n", i);
	printf("Address of i is %d\n", &i);
	printf("Value of i is %d\n", *j);
	printf("Address of i is %d\n", j);
	printf("Address of j is %d\n", &(j));
	return 0;
}