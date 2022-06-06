// write a program to read and display n numbers using an array
#include <stdio.h>

int main(){
	int arr[20], n;
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		printf("Arr[%d]: ", i);
		scanf("%d", &arr[i]);
	}
	printf("\nThe array elements are- \n");
	for(int i = 0; i < n; i++){
		printf("%d\t", arr[i]);
	}
	return 0;
}