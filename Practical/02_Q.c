//Q.2) write a program to display ASCII value of a character.

#include <stdio.h>

int main(){
	char ch; 
	printf("Enter a character: ");
	scanf("%c", &ch);
	
	printf("ASCII value of %c is = %u\n", ch, ch);
	return 0;
}