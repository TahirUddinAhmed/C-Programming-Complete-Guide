#include <stdio.h>

int main(){
	int num[] = {7, 13, 921, 16, 9, 24};
	int i, *large;
	large = num; // same as &num[0]; 
    for(i = 0; i < 6; i++){
    	if(num[i] > *large)
    		large = &num[i];
	}
	printf("Biggest number of an array is %d\t", *large);
	return 0;
}