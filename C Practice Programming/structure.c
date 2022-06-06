#include <stdio.h>

struct student{
	int r_no;
	char *name;
	float total;
};

int main(void){
	struct student s1; 
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		printf("------ Student %d ------ \n", i);
		printf("Enter roll Number: ");
		scanf("%d", &s1.r_no);
		printf("Enter name of student: ");
		scanf("%s", &s1.name);
		printf("Enter marks : ");
		scanf("%f", &s1.total);
		
		printf("\n\n");
	}
	// print the list
	printf("\nList of student name who has scored more than 75 Marks - \n ");
	// logic
	for(int i = 1; i <= n; i++){
		if( > 75){
			printf("Name of student : %s\n", s1.name);
		}
	}
	
}