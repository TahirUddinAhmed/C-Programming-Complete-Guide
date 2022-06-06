#include <stdio.h>
#include <string.h>

typedef struct person{
	char *name;
	char *number;
}person;

int main(void){
    char names[20];
    printf("PhoneBook\n");
    printf("Search a name: ");
    scanf("%s", names);
    
    person p[2];
	
	p[0].name = "Tahir";
	p[0].number = "+91 9365910717";
	
    p[1].name = "Ayan";
    p[1].number = "+91 7002167910";
    
    for(int i = 0; i < 2; i++){
    	if(strcmp(p[i].name, names) == 0){
    	    printf("His phone number is %s\n", p[i].number);
    	    return 0;
    	}
    }
    
    printf("Not Found \n");
    return 1;
}