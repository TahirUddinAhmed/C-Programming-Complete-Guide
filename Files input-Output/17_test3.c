#include <stdio.h>

int main(void){
	FILE *fp;
	char ch;
	fp = fopen("sample2.txt", "r");
	ch = fgetc(fp); // reading the 1st char
	if(fp == NULL){
		printf("can't open this file");
	}
	while(ch != EOF){
		printf("%c", ch);
		ch = fgetc(fp);
	}
	printf("\n");
	fclose(fp); // close the file 
}