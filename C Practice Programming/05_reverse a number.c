#include <stdio.h>

int main(){
	int n = 12345;
	int rev = 0; 
	int rem;
	printf("\nOriginal number = %d", n);
	while(n != 0){
		rem = n %10;
		rev = rev * 10 + rem;
		n = n / 10;
	}
	printf("\nReverse Number = %d", rev);
	return 0;
}	