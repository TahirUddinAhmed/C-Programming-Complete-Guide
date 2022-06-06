#include <stdio.h>

int main(){
	FILE *fp;
	int x = 5;
	int i;
	fp = fopen("multi.txt", "w");
	if(fp == NULL)
		puts("This file could not be opened!");
		
	for(i = 1; i < 11; i++){
		fscanf(fp, "%d", &x);
		fprintf(fp, "%d × %d = %d\n", x, i, x*i);
	}
	return 0;
}