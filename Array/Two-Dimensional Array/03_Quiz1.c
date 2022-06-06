#include <stdio.h>

int main(void){
	int arr[5][5] = {
		{8, 3, 9, 0 ,10},
		{3, 5, 17, 1, 1},
		{2, 8, 6, 23, 1},
		{15, 7, 3, 2, 9},
		{6, 14, 2, 6, 0}
	};
	int i, j, sum = 0; 
	// add rows 
	printf("Total Rows: ");
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			sum += arr[i][j];
		}
		printf("%d\t", sum);
		sum = 0;
	}
	printf("\n\n");
	printf("PRINT COLUMN WISE: \n");
	// add column
	printf("Total Columns: ");
	for(j = 0; j < 5; j++){
		for(i = 0; i < 5; i++){
			sum += arr[i][j];
		}
		printf("%d\t", sum);
		sum = 0;
	}
}