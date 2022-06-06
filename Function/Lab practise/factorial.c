#include <stdio.h>

int main(void){
	int n;
	int fact = 1;
	printf("Enter a number : ");
	scanf("%d", &n);
	
	for(int i = n; i > 0; i--){
		fact = fact * i;
	}
	printf("Factorial = %d\n", fact);
}