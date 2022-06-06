#include <stdio.h>
int fact(int);
int main(){
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	printf("Factorial of %d is = %d", n, fact(n)); // function call
	return 0;
}
// function defination
int fact(int n){
	if(n == 0)
		return 1;
//	int smallerProb = fact(n -1);
//	int biggerProb = n * smallerProb;
	
	return n * fact(n -1);
}