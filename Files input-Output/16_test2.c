#include <stdio.h>
#include <string.h>

int main(void){
	FILE *fp;
	fp = fopen("sample2.txt", "w");
	if(fp == NULL){
		printf("File not found!");
	}
	char ch = 'M';
	int num = 139141021;
    fprintf(fp,"%c\n", ch);
    fprintf(fp,"%d\n", num);
	fclose(fp);
}