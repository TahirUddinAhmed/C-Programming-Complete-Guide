#include <stdio.h>
int find(int, int, int);
int main(void){
	int a, b, c, result;
	printf("Enter three numbers : ");
	scanf("%d %d %d", &a, &b, &c);
	
	result = find(a, b, c); // function call
	printf("Bigest Number is = %d ", result);
}
int find(int x, int y, int z){
	int big;
	if(x > y  && x > z)
		big = x;
	else if(y > z)
		big = y;
	else
		big = z;
	
	return big;
}
