/*
Q. write a program to print multiplication table of 10 in reverse order. 

Algorithm
========
step1: Read - num = 10; 
step2: START
			for(i = num; i >= 1; i--)
				mul = num * i;
			END for loop
step 3: stop;
*/
#include <stdio.h> 

int main(){
	int num = 10; 
	int i;
	int mul;
	for(i = num; i >= 1; i--){
	    mul = num * i;
		printf("%d × %d = %d\n", num, i, mul);
	}
	return 0;
}