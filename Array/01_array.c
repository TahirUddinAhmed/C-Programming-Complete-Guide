#include <stdio.h>

int main(){
	int arr[5] = {2, 7, 8, 16, 1};
	int small, pos = 0;
	small = arr[0];
	
	for(int i = 0; i < 5; i++){
		if(arr[i] < small){
			small = arr[i];
			pos = i;
		}
	}
	printf("\nThe array elements are - \n");
	for(int i = 0; i < 5; i++){
		printf("%d\t", arr[i]);
	}
	
	printf("\n\nThe smallest number of this array %d\n", small);
	printf("The position of the smallest number is %d\n", pos);
}