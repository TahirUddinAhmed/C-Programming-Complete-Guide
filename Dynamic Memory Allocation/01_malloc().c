#include <stdio.h>
#include <stdlib.h>

int main(){
	int n; 
	printf("\nEnter the number of integer: ");
	scanf("%d", &n);
	
	int *ptr = (int* ) malloc(n * sizeof(int));
	
	// for loop
	for(int i = 0; i < n; i++){
		printf("\nEnter an integer: ");
		scanf("%d", ptr + i);
	}
	for(int i = 0; i < n; i++)
		printf("%d\t", *(ptr + i));
	return 0;
}