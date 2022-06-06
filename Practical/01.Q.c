// convert a given temperature value from Fehrenheit scale to centigrade scale. 
// formula 
// c = (f - 32) * 5/9

#include <stdio.h>

int main(void){
	float f, c; 
	printf("Enter Fehrenheit Value: ");
	scanf("%f", &f);
	
	// convert 
    c = (f - 32) * 5/9;
    
    printf("Centigrade = %.4f", c);
}