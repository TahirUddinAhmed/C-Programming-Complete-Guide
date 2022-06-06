#include <stdio.h>
#include <string.h>
int main(void){
//	int i, j;
//	scanf("%d %d", &i, &j);
	char s[20];
	char t[20];
	printf("s: ");
	gets(s);
	printf("t: ");
	gets(t);
	
	if(strcmp(s, t) == 0){
		printf("Same\n");
	}else{
		printf("Different\n");
	}
}