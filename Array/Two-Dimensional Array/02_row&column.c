#include <stdio.h>

int main(void){
	int arr[5][5] = {
		{8, 3, 9, 0 ,10},
		{3, 5, 17, 1, 1},
		{2, 8, 6, 23, 1},
		{15, 7, 3, 2, 9},
		{6, 14, 2, 6, 0}
	};
	int i, j; 
	printf("PRINT ROW WISE: \n");
	// print the rows 
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	printf("PRINT COLUMN WISE: \n");
	// print the columns 
	for(j = 0; j < 5; j++){
		for(i = 0; i < 5; i++){
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
}