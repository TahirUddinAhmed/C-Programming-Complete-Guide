//Q3) write a function to find the factorial of a number. Using (with return value & with arguments) function. 
/*4! = 4 × 3 × 2 × 1
loop 
element muply 
*/
#include <stdio.h>
int fact(int n);
int main(void){
	int a;
	scanf("%d", &a);
	printf("Factorial of %d is %d\n", a,fact(a));
}
// defination
int fact(int n){
	int f = 1;   
	for(int i = 1; i <= n; i++){
		f = f * i;
	}
	return f;
}