#include <stdio.h>

int main(void){
	int n;
	printf("Check Number is perfect or not\n");
	printf("\nEnter a number: ");
	scanf("%d", &n);
	
	int check = 0;
	for(int i = 1; i < n; i++){
		if(n % i == 0){
		//	printf("Factors = %d\n", i);
			//check
			check += i;
		}
	}
	
	if(check == n){
		printf("%d is a perfect number\n", n);
	}else
		printf("%d is not a perfect number\n", n);
}