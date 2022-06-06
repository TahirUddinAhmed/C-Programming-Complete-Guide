#include <stdio.h>
/*sum of n natural number*/

int main(){
	int num, i;
	printf("\nEnter a number: ");
	scanf("%d", &num);
	int sum = 0;
	//logic
	for(i = 1; i <= num; i++){
		sum+= i;
	}
	printf("\nThe sum of %d th natural number is = %d", num, sum);
	return 0;
}