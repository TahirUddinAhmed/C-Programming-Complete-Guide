// Passing array Elements to a function
// call by reference function
#include <stdio.h>

void fun1(int*);
int main(){
	int arr[] = {55, 65, 75, 56, 90};
	int i;
	for(i=0; i < 5; i++){
		fun1(&arr[i]);		
	}
	return 0;
}
void fun1(int *n){
	printf("Elements of the array is %d\n", *n);
}