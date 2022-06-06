//Q2). write a function that prints the odd number from 1 to n. Use(no return value & with arguments) 
//number % 2 != 0  formula 
#include <stdio.h>
void oddNum(int n); 
int main(void){
	int n = 30; 
	oddNum(n);  // argument 
}
// defination
void oddNum(int n){ // parameters
	for(int i = 1; i <= n; i++){
		if(i%2 !=0){
			printf("Odd : %d\n", i);
		}
	}
}