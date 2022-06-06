#include <stdio.h>
// create a file to read three integer 
int main(){
	FILE *fp;
	int n1, n2, n3;
	fp = fopen("integer.txt", "r");
	if(fp == NULL)
		puts("This file could not be opened!");
		
//	while(fp != EOF)
	fscanf(fp, "%d %d %d", &n1, &n2, &n3);
	printf("The first number is = %d\n", n1);
	printf("The second number is = %d\n", n2);
	printf("The third number is = %d\n", n3);
	return 0;
}