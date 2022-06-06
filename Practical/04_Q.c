//Q.4) Biggest of three numbers using nested if. 

#include <stdio.h>

int main(){
	int a, b, c;
	a = 49, b = 12, c = 95; 
	int big = 0;
	
	// check -> nested if. 
	if(a > b){
		if(a > c){
			big = a;
		}else 
			big = c;
	}else {
		big = b;
	}
	
	printf("The biggest number is = %d\n", big);
	return 0;
}