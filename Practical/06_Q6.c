// Q.6
#include <stdio.h>

int main(){
	int n;
	int count_Ev = 0, count_Odd = 0;
	printf("Enter a number: ");
	scanf("%d", &n);
	// check if n is positive
	if(n > 1){
		for(int  i = n; i > 1; i--){
			if(i % 2 == 0){
				printf("Even : %d\n", i);
				count_Ev++;
			}
			else{
			  printf("Odd : %d\n", i);
			  count_Odd++;
			}
		}
	}else{
		printf("Please Enter a positive number\n");
	}
	// print the total counts
    printf("--- Total Counts-----\n");
	printf("Even= %d\t Odd = %d", count_Ev, count_Odd);
	return 0;
}