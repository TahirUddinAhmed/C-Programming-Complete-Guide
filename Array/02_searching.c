#include <stdio.h>

int main(){
	int arr[5] = {21, 0, 6, 8, 14};
	int search;
	printf("Search for a number: ");
	scanf("%d", &search);
	
	for(int i = 0; i < 5; i++){
		if(arr[i] == search){
			printf("Found");
			return 0;
		}
	}
	printf("Not found!");
	return 1;
}