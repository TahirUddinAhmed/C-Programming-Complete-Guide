#include <stdio.h>

int main(){
	int num; 
	int isPrime = 1; // set isprime is Prime number
	printf("\nEnter a number to chack (prime or not): ");
	scanf("%d", &num);

	// logic
	for(int i = 2; i <= num; i++){
		if(num % i == 0)
			isPrime = 0; // not prime
	}
	if(isPrime)
		printf("\nThe number %d is prime", num);
	else
		printf("\nThe number %d is not prime", num);
	return 0;
}