#include <stdio.h>

int main(){
	int n = 5;
	int fact = 1;
	for(int i = n; i >= 1; i--){
		// 1 2 3 4 5
		fact = fact * i;
		//printf("%d × %d = %d\n", i, fact, fact);
	}
	printf("The factorial of %d is = %d\n", n, fact);
	return 0;
}