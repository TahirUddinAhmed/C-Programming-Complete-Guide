#include <stdio.h>
#include <string.h>
int main(void){
	char s[20];
	char s1[20] = " Bye";
	char t[20];
	
	printf("s: ");
	gets(s); // gets can receive muli-word string 
	// copy string t into s
	strcpy(t, s); 
	printf("t: %s\n", t); 
	// Concatinate string t onto s
	strcat(s, s1); // here s = s + s1
	printf("s: %s\n", s);
	
}