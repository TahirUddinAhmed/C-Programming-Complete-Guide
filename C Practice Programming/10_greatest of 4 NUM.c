/*
write a program to find the greatest of four numbers entered by the user. 

e.x: a = 5, b = 8, c = 2, d = 4, 

here, b is the greatest number. 

Algorithm
========
step 1: Read a, b, c, d 
step 2: if(a > b && a > c && a > d)
				big = a;
			else if(b > a && b > c && b > d)
				big = b;
			else if(c > a && c > b && c > d)
				big = c;
			else 
				big = d;
step 3: printf - big;
step 4: stop. 

*/
#include <stdio.h>

int main()
{
	int a = 2, b = 27, c = 15, d = 10;
	int big;

	if (a > b && a > c && a > d)
		big = a;
	else if (b > c && b > d)
		big = b;
	else if (c > d)
		big = c;
	else
		big = d;
		
	printf("\nlargest number = %d", big);
	return 0;
}