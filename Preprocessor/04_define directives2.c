#include <stdio.h>
#define FOUND printf("Yankee Doodle Virus\n");

int main(){
	char signature;
	printf("\nEnter (Y/N): ");
	scanf("%c", &signature);
	if(signature == 'Y')
		FOUND // no need to write semi-colon at the end
	else 
		printf("Safe... as yet!\n");
		
	return 0;
}