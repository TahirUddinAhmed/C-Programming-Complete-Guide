#include <stdio.h>
// read file character by character 
int main(void){
	FILE *fp;
	int ch;
	fp = fopen("ABC.txt", "r");
	if(fp == NULL)
		printf("This file doesn't exist! \n");
	
//	ch = fgetc(fp);
//	while(ch != EOF){
//		printf("%c", ch);
//		ch = fgetc(fp);
//	}
		while((ch = fgetc(fp)) != EOF){
			printf("%c", ch);
		}
			// EOF means END-OF-FILE
	
	fclose(fp);
}