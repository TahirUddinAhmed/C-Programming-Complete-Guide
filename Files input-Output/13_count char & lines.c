#include <stdio.h>
#include <string.h>

int main(){
	FILE *fp;
	char filename[20];
	int ch, no_of_Char = 0, no_lines = 1;
	printf("\nEnter the name of the file: ");
	gets(filename);
	fp = fopen(filename, "r");
	if(fp == NULL)
		puts("Error opening the file!");
	//else
//		printf("Successfully open the %s file", filename);
	ch = fgetc(fp);
	while(ch != EOF){
		if(ch == '\n')
			no_lines++;
		no_of_Char++;
		ch = fgetc(fp);
	}
	if(no_of_Char > 0)
		printf("\nIn the file %s, there are %d lines and %d characters", filename, no_lines, no_of_Char);
	else
		printf("\nThe file is empty");
		
	fclose(fp);
	return 0;
}