#include <stdio.h>

int main(void){
	int num, i = 0;
	int rem;
	int a[10];
	
	printf("------Decimal to binary conversion-------\n");
	printf("\nEnter decimal Number: ");
	scanf("%d", &num);
	while(num){
		rem = num % 2;
		num = num / 2;
		a[i] = rem;
	//	printf("%d\t",a[i]);
		i++;
	}
	printf("Binary: ");
	for(int j = i-1; j >= 0; j--){
		printf("%d", a[j]);
	}
}