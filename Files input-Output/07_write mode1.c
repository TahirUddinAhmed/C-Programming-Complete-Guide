#include <stdio.h>
#include <string.h>
int main(void){
	FILE *fp; 
	fp = fopen("write.txt", "w");
	char name[100];
	if(fp == NULL)
		puts("This file doesn't exits");
		
//	while((strlen(name)) == 0){
		puts("Enter some text: ");
		gets(name);
		fprintf(fp, "%s", name);
//	}
	fclose(fp);
}