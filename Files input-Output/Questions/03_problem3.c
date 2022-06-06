#include <stdio.h>
#include <conio.h>
struct employee{
	char name[20];
	int salary;
};
int main(){
	struct employee e1;
	FILE *fp;
	char another = 'Y';
	fp = fopen("employee.txt", "w");
	if(fp == NULL)
		puts("This file could not be opened!");
		
	while(another == 'Y'){
	puts("Enter the name of Employee: ");
	gets(e1.name);
	puts("Enter Salary: ");
	scanf("%d", &e1.salary);
	fputs(e1.name, fp);
	fprintf(fp, "\t%d", e1.salary);
	fprintf(fp, "\n");
	printf("\nAdd Another record(Y/N): ");
	fflush(stdin);
	another = getche();
}
	return 0;
}