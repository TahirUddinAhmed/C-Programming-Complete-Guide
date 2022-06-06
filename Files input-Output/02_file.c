#include <stdio.h>
int main(){
	FILE *fp;
	int num, num2;
	fp = fopen("sample.txt", "r"); // file open
//	fp = fopen("sample2.txt", "w");
	printf("Enter the first number: ");
	// read from keyboard
	fscanf(stdin, "%d", &num);
	printf("Enter the first number: ");
	fscanf(stdin, "%d", &num2);
	// read from file 
	fscanf(fp, "%d %d", &num, &num2);
	printf("First Number is : %d\n", num);
	printf("Second Number is : %d\n", num2);
	fclose(fp); // file close
	return 0;
}