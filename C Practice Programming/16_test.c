#include <stdio.h>

int main(void){
	FILE *fp;
	char ch;
	fp = fopen("sample2.txt", "r");
/*	if(fp == NULL){
	   printf("Can't open this file");
	}*/
	fscanf(fp, "%c", &ch);
	printf("Character = %c\n", ch);
	
	fclose(fp);
	
}