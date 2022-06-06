#include <stdio.h>

int reverse(int);
int main(){
	int num; 
	int rev; 
	printf("\nEnter a number : ");
	scanf("%d", &num);
	printf("\nOriginal Number = %d", num);
	rev = reverse(num);
	printf("\nReverse number = %d", rev);
	return 0;
}
int reverse(int n){
	int rev = 0, rem;
	while(n > 0){
		rem = n % 10; // remainder of the number
		rev = rev * 10 + rem; // store the last number
		n = n/10;
	}
	
	return rev;
}