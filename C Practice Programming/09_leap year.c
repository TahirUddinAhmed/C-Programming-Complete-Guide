#include <stdio.h>
// create a program to find whether a year is leap year or not . 

/*
Alrogithm
========
step 1: Read - year. 
step2. if(year%4 == 0)
				leap year;
			else
				not leap year
step 3: stop. 
*/
int main(){
	int year;
	printf("\nEnter a year to check(leap year or not): ");
	scanf("%d", &year);
	
	if(year % 4 == 0)
		printf("\n%d is leap year", year);
	else
		printf("\n%d is not leap year", year);
		
	return 0;
}