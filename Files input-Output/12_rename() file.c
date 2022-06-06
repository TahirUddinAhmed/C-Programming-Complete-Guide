#include <stdio.h>
// rename a file 
int main(){
	int success = 0;
	success = rename("Hey.txt", "Tahir.txt");
	if(success != 0)
		puts("The file could not be renamed!");
	return 0;
}