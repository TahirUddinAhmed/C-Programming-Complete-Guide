#include <stdio.h>

int main(){
	char married = 'N', sex = 'f';
	int age = 6;
	
	// check 
	if(married == 'Y'){
		printf("You are illigeble to drive");
	}else if(sex == 'M' || sex == 'm' && age > 30){
		printf("Hello Dude! You can drive");
	}else if(sex == 'F' || sex == 'f' && age > 25){
		printf("Hello Laddy! You can drive");
	}else 
		printf("You are not illigeble");
	return 0;
}