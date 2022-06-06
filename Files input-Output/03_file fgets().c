#include <stdio.h>

int main(){
	FILE *fp;
	char str[100];
	fp = fopen("ABC.txt", "r");
	if(fp == NULL){
		printf("This file doesn't exists!");
		exit(1);
	}
	while(fgets(str, 100, fp) != NULL){
		printf("\n%s", str);
	}
	printf("\n\nFile read, Now closing the File");
	fclose(fp);
	return 0;
}