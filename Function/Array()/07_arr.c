#include <stdio.h>

int main(){
	int arr[9], *small, pos, n;
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++){
		printf("arr[%d]: ", i);
		scanf("%d", &arr[i]);
	}
	// SAMLLEST
	small = &arr[0];
	pos = 0;
	for(int i = 1; i <= n; i++){
		if(arr[i] < *small){
			*small = arr[i];
			pos = i;
		}
	}
	printf("\nThe Smallest number of this array is &d\n", *small);
	printf("position of the smallest number is %d\n", pos);
	
	return 0;
}