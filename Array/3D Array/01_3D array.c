#include <stdio.h>

int main(void){
	// initializing 3D array
	int arr[2][2][3] = {
		// first 2D array 
		{ 
		   {1, 2, 3},
		   {4, 5, 6}
		 },
		 //second 2D array
		 {
		 	{7, 8, 9},
		 	{10,11,12}
		 }
	};
	int i, j, k;
	
	// access the elements of 3D array 
	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			for(k = 0; k < 3; k++){
				printf("%d\t", arr[i][j][k]);
     	 }
     	 printf("\n");
   	}
   	printf("\n");
	}
	
}