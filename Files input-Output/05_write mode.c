#include <stdio.h>

int main(){
	FILE *fp;
	int num = 90;
	fp = fopen("generate.txt", "w");
	fprintf(fp, "number is : %d\n", num);
	fclose(fp);
	return 0;
}
