#include <stdio.h>

int main(){
	FILE *fp;
	char feedback[100];
	fp = fopen("comments.txt", "w");
	if(fp == NULL)
		puts("This file doesn't exits");
	puts("Provide feedback on this book: ");
	gets(feedback);
	for(int i = 0; i < feedback[i]; i++)
		fputc(feedback[i], fp);
	fclose(fp);
}