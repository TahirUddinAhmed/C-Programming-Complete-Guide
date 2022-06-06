/*Q.7) WAP to read values of n and x and print the value of y using switch case where- 
    a. y = n+x when n=1
    b. y= 1+x/n when n=2
    c. y= n+3x when n = 3
    d.y=1+nx when n>3 or n<1.
*/
#include <stdio.h>

int main(){
	int n, x, y;
	scanf("%d %d", &n, &x);
	
	// check
	switch(n){
		case 1: {
			y = n+x;
			printf("Y = %d\n", y);
			break;
		}
		case 2: {
			y= 1+x/n;
			printf("Case 2, y = %d", y);
			break;
		}
		case 3: {
			y= n+3*x;
			printf("Case 3, y = %d", y);
			break;
		}
		default: {
			if(n > 3 || n < 1){
	       	y = 1+n*x;
	       	printf("case 4, Y = %d", y);
       	}
		}
	}
	
	return 0;
}