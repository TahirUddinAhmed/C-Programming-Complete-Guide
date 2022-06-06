#include <stdio.h>

int main(){
	float l, w, area = 1;
	printf("\nEnter the lenght of rectange: ");
	scanf("%f", &l);
	printf("\nEnter the width of rectange: ");
	scanf("%f", &w);
	
	// area 
	area = l * w;
	printf("\nThe area of this rectangle is = %.3f", area);
	return 0;
}