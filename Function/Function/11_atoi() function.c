#include <stdio.h>
#include <stdlib.h>
int main(void){
	// the atoi function convert a string into integers 
	char phone[] = "936591";
	char name[] = "Tahir";
	int con;
	con = atoi(phone);
	printf("%d\n", con);
	// convert the string
	con = atoi(name);
	printf("%d\n", con);
	
	// if no conversion could be perform it returns zero
}