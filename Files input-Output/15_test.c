#include <stdio.h>

int main(void){
	FILE *fp;
	fp = fopen("sample2.txt", "r");
	if(fp == NULL){
		printf("file not found!");
	}
	char ch;
	fscanf(fp, "%c", &ch);
	printf("character = %c", ch);
	fclose(fp);
}