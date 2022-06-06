#include <stdio.h>

int main(){
	int num, mul, res = 0;
	int i;
	printf("\nEnter a number: ");
	scanf("%d", &num);
	for(i = 1; i < 11; i++){
	    mul = num * i;
		printf("%d × %d = %d\n", num, i, mul);
		
		res = res + mul;
	}
	printf("\nThe sum of the number occuring the multiplication table of %d = %d", num, res);
	return 0;
}