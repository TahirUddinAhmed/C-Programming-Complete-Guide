#include <stdio.h>
#include <string.h>

int main(void){
	char *fruit[] = {"2 Orange", "2 Apples", "3 Bananas", "1 Pineapple"};
	if(strcmp(fruit[1], fruit[2]) < 0)
		printf("%s is lesser than %s", fruit[1], fruit[2]);
	else if(strcmp(fruit[1], fruit[2]) > 0)
		printf("%s is greater than %s", fruit[1], fruit[2]);
}