#include <stdio.h>

int main(){
	FILE *fp = fopen("EOF.txt", "r");
	char txt[80];
	if(fp == NULL)
		puts("The file could be openes!");
	
	while(!feof(fp)){
		// feof defines the end of the file 
		fgets(txt, 79, fp);
		printf("%s", txt);
	}
	fclose(fp);
	return 0;
}