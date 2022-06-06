#include <stdio.h>

int main(){
	// accessing elements of an array
	// set each elements of the array to 24
	int i, mark[10];
	for(i = 0; i < 10; i++){
		mark[i] = 24;
		printf("%d\t", mark[i]);
	}
	return 0;
}