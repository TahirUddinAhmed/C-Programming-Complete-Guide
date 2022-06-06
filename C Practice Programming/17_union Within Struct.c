#include <stdio.h>
struct student{
	union{
		char name[20];
		int roll;
	};
	int marks;
};
int main(void){
	struct student stud;
	char choice;
	printf("You can Enter student name or Student roll Number-");
	printf("\nDo you want to enter Name?(y/n): ");
	scanf("%c", &choice);
	if(choice == 'y' || choice == 'Y'){
		printf("\nEnter Student Name: ");
		scanf("%s", stud.name);
	}else if(choice == 'n' || choice == 'N'){
		printf("\nEnter Roll number: ");
		scanf("%d", &stud.roll);
	}else{
		printf("\nInvalid Character! (;; ");
	}
	
	printf("Enter Marks: ");
	scanf("%d", &stud.marks);
	
	if(choice == 'y' || choice == 'Y')
		printf("\nStudent Name: %s", stud.name);	else if(choice == 'n' || choice == 'N')
		printf("\nRoll number: %d ", stud.roll);
	
	printf("Marks : %d\n", stud.marks);
}