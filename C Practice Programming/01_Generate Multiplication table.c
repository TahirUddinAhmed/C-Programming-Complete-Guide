#include <stdio.h>
/*Generate a Multiplication table of a given number.. */
int main(){
	int n, i; 
	printf("\nGenerate Multiplication Table");
	printf("\nEnter a number : ");
	scanf("%d", &n);
	
	// logic
	for(i = 1; i < 11; i++){
		printf("%d × %d = %d\n", n, i, n*i);
	}
	return 0;
}