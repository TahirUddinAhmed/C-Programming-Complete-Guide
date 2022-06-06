//1) No return value & no arguments
#include <stdio.h>
void SumTwo(); // function prototype
int main(){
	SumTwo(); // function call 
	return 0;
}
// defination
void SumTwo(){
	int a,b, total = 0;
	scanf("%d %d", &a, &b);
    total = a + b;
    
    printf("Sum is %d\n", total);
}