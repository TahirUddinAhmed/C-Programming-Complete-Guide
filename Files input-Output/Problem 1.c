#include <stdio.h>
// create a file to read three integer 
int main(){
	FILE *fp;
	int number;
	fp = fopen("sample.txt", "r");
	if(fp != NULL){
		puts("This file could not be opened!");
	}
//	while(fp != EOF)
	//	fscanf(fp, "%d", number);
	return 0;
}