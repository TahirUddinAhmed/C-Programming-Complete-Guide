#include <stdio.h>
// read a file character by character 
// use fgetc()
int main(void){
	FILE *fp = fopen("EOF.txt", "r");
	char c;
	c = fgetc(fp);
	while(!feof(fp)){
		c = fgetc(fp);
		printf("%s", c);
	}
	return 0;
}