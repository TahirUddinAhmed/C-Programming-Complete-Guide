#include <stdio.h>
#define AREA(x) (3.14*x*x)
int main(){
	float r1 = 6.25, r2 = 2.5, a;
	a = AREA(r1);
	// a = 3.14 * r1 * r1;
	printf("Area of circle r1 = %f\n", a);
	a = AREA(r2);
	printf("Area of circle r2 = %f\n", a);
	return 0;
}