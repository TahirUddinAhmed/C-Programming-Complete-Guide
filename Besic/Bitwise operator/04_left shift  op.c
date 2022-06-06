// left shift operator
/*
  first operand << second operand
           |                               |
           |                               |
  whose bits get          Decide the number 
  left shifted                 of places to shift the
                                       bits
*/

#include <stdio.h>

int main(void){
	int a = 10; 
	
	printf("%d\n", a << 2);
}