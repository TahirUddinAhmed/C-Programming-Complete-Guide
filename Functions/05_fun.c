//Q)Write a program to calculate area of a circle. 
// formula = 3.14 * r * r
#include <stdio.h>
float areaCircle(int r);
int main(){
	float redius = 7;
	printf("Area is %.2f\n", areaCircle(redius));
	return 0; 
}
// defination
float areaCircle(int r){
	return 3.14 * r * r;
}
