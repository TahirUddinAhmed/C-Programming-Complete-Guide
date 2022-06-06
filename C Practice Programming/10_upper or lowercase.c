#include <stdio.h>
/*
Lowercase or uppercase 

ASCII VALUE 
==========
A - Z = 65 - 90
a - z = 97 - 122

Algorithm
========
step1: Read ch.
step2: if(ch <= 97 && ch >= 122)
				 lowercase;
			ifelse(ch <= 65 && ch >= 90)
				uppercase;
step3: printf ch;
step4: stop. 

*/
int main(){
	char ch;
	printf("\nEnter a character to check(uppercase or lowercase): ");
	scanf("%s", &ch);
	
	if(ch >= 97 && ch <= 122){
		printf("\n%c is a lowercase letter.", ch);
	}else if(ch >= 65 && ch <= 90)
		printf("\n%c is a Uppercase letter", ch);
	return 0;
}