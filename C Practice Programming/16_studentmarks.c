/*Declare,a structure of a student with details
like roll number, student name and total
marks. Write a C program to read details of
n students and dispaly the list of students
who has scored 75 marks and above
*/
#include <stdio.h>

typedef struct{
	int roll;
	char name[20];
	int mark;
}student;

int main(void){
	student st[50];
	int n;
	printf("How many Students ? ");
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		printf("-----Student [%d]-----\n", i+1);
		printf("Enter Roll Number: ");
		scanf("%d", &st[i].roll);
		printf("Enter name: ");
		scanf("%s", &st[i].name);
		printf("Enter marks: ");
		scanf("%d", &st[i].mark);
	}
	printf("\n\nList of student name who has scored more than 75----\n");
	for(int i = 0; i < n; i++){
		if(st[i].mark > 100 || st[i].mark < 0){
			printf("\n\nNot Possible! Marks cannot be more than 100 or less than 0\n");
			return 0;
		}
		
		if(st[i].mark > 75){
		    printf("\n Name = %s,  mark = %d",st[i].name, st[i].mark);		    
		    
		}
	}
	
}