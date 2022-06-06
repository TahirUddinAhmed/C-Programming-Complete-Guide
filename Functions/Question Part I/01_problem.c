//Q1). Write a program in C to find the square of any number using function. Use(no return value & no arguments). 
#include <stdio.h>
void square(); // prototype
int main(void){
	square(); // function call 
}
// defination 
void square(){
	int a = 7;
	printf("square of %d is %d\n", a, a*a);
}