// string in C
// string is an array of character 
#include <stdio.h>

int main(void){
//	char *ch = "Hi!"; // pointer
	char s[] = "Hello";
	char *p = &s[0]; // store base address of s
	int i;
	/*stored in memory
	   H i ! \0
	*/
	printf("%u\n", p);
	printf("%u\n", &s);
	
	// print
	while(i < 5){
		printf("%c", s[i]);
		i++;
	}
	printf("\n");
	
	// using pointer 
	while(*p != '\0'){
		printf("%c", *p);
		p++;
	}
	
	
}