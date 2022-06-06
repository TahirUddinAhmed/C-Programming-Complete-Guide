#include <stdio.h>

int main(){
	int arr[6]= {1, 0, 99, 11, 23 , 54};
	int lrg = arr[0]; //let largest number
	for(int i = 0; i < 6; i++){
		if(arr[i] > lrg)
			lrg = arr[i];
	}
	printf("\nThe largest number in this array is = %d", lrg);
	return 0;
}