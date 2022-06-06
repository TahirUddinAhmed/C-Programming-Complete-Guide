#include <stdio.h>
#define AND &&
# define OR ||

int main(){
	int f = 1, x = 4, y = 90;
	if((f < 5) AND (x <= 20 OR y <= 45))
		printf("Your PC is always work fine...\n");
	else
		printf("In front of the maintanance man\n");
		
		return 0;
}