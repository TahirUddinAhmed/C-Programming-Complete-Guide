#include <ctype.h>
#include <stdio.h>
#include <string.h>
int main(){
//    char ch = 't';
//	
//	printf("%c", toupper(ch));
	// character by character
	char name[] = "TAHIR";
	int i = 0;
	char ch;
	
	while(i < strlen(name)){
		ch = name[i];
		printf("%c", tolower(ch));
		i++;
	}
}