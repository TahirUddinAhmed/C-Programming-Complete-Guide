#include <stdio.h>

int main(void){
	int n, min, max, x;
	printf("How many numbers?\n: ");
	scanf("%d", &n);
	max = 0;
	min = 999;
	for(int i = 1; i <=n; i++){
		printf("\nEnter x-%d: ", i);
		scanf("%d", &x);
		
		if(max < x)
			max = x;
		if(min > x)
			min = x;
	}
	printf("Minimum = %d\n", min);
	printf("Maximum = %d\n", max);
}