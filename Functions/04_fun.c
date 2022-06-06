//4) with return values & with arguments
#include <stdio.h>

int Sum(int x, int y);
int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	int Call = Sum(a, b);
	printf("Sum is %d", Call);
	return 0;
}
int Sum(int x, int y){
    return x + y;
}