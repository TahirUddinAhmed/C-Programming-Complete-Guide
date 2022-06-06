#include <stdio.h>

int concat(char*, char*);
int main(void){
	char s1[] = "Good";
	char s2[] = "Morning";
	concat(&s1[0], &s2[0]);
}
int concat(char *s, char *t){
	char *con;
	while(*s != '\0'){
	    printf("%c", *s);
		*s++;
	}
	
}