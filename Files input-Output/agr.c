#include <stdio.h>

int main(int argc, char *agrv[]){
	int i;
	printf("\nNumber of agruments passed = %d", argc);
	
	for(i = 0; i < agrc; i++)
		printf("\narg[i] = %s", argv[i]);
	
	return 0;
}