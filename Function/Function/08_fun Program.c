#include <stdio.h>
int cal(int*, int*);
int main(void){
	int n1, n2;
	cal(&n1, &n2);
}
int cal(int *a , int *b){
	int sum;
	float avrg;
	printf("Enter two numbers: ");
	scanf("%d %d", a, b);
	
	sum = *a + *b;
	avrg = sum/2;
	printf("Sum = %d\n", sum);
	printf("Average = %.2f\n", avrg);
}
