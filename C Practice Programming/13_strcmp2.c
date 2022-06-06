#include <stdio.h>
#include <string.h>

int main(void){
	char str1[] = "Hello";
	char str2[] = "Hello";
	
	int cmp = strcmp(str1, str2);
	
	if(cmp == 0){
		printf("Equal");
	}else{
		printf("Unequal");
	}
}