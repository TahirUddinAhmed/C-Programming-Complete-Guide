#include <stdio.h>
#include <string.h>
int main(void){
	char str[] = "Hello every one good morning";
	int i;
	int count = 0;
	
	for(i = 0; i < strlen(str); i++){
		if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
			count++;
		}
		printf("%c", str[i]);
	}
	printf("\nVowels = %d", count);
	
}