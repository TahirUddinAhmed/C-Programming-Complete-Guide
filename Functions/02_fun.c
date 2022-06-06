// no return value & with arguments. 
#include <stdio.h>

void findBig(int x, int y);

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	
	findBig(a, b);
	return 0; 
}

void findBig(int x, int y){
	if(x > y){
	  printf("%d is big", x );
	}else{
		printf("%d is big", y);
	}
}