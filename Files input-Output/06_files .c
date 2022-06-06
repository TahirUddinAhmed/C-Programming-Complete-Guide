#include <stdio.h>
#include <string.h>

int main(){
	FILE *fp;
	char ch[20];
	fp = fopen("Students.txt", "a");
	if(fp == NULL){
		puts("This file doesn't exits.");
	}
	printf("\nGive Your Feedback-\n: ");
	while(strlen(gets(ch)) > 0){
		fprintf(fp, "======= Feedback========\n");
		fputs(ch, fp);
		fputs("\n", fp);
	}
}