#include <stdio.h>
#include <conio.h>

int main(){
	int m; 
	char grade; 
	
	printf("Enter your Marks: ");
	scanf("%d", &m);
	if(m < 0 || m > 100){
		printf("Not Possible");
		return 1;
	}
	if(m > 75)
	   grade = 'O';
    else if(m >= 60 && m < 75)
       grade = 'A';
    else if(m >= 50 && m < 60)
       grade = 'B';
    else if(m >= 40 && m < 50)
       grade = 'c';
    else 
       grade = 'D';
       
       
    printf("\n\n----------Students Result-----------\n\n");
    printf("Your marks is %d\nGrade is %c\n", m, grade);
	return 0;
}