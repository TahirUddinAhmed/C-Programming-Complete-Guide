//3) with return values & no arguments
#include <stdio.h>

int SumTwo(); // prototype
int main(){
/*	int result = SumTwo();
	printf("result %d", result);*/
	printf("%d", SumTwo());
	return 0;
}
// defination
int SumTwo(){
	int a,b, total = 0; 
	scanf("%d %d", &a, &b);
	total = a + b; 
	
	return total;
}