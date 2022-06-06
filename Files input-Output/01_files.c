#include <stdio.h>
int main(){
	FILE *fp;
	int num, num2;
	fp = fopen("sample.txt", "r"); // file open
//	fp = fopen("sample2.txt", "w");
	fscanf(fp, "%d", &num);
	fscanf(fp, "%d", &num2);
	printf("First Number is : %d\n", num);
	printf("Second Number is : %d\n", num2);
	fclose(fp); // file close
	return 0;
}