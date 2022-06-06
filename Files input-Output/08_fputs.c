#include <stdio.h>

int main(void){
	FILE *fp; 
	char feedback[100];
	fp = fopen("feedback", "w");
	if(fp == NULL)
		puts("This file doesn't exits");
		
	puts("Provide Feedback on this book: ");
	gets(feedback);
	// fputs(char *str, FILE *Stream);
	fputs(feedback, fp);
	fclose(fp);
}