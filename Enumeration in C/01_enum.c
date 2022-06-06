#include <stdio.h>
enum Bool{False, True};

int main(){
	enum Bool var;
	var = False;
	printf("%d", var);
	return 0;
}