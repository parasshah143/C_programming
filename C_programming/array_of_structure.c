#include<stdio.h>
#include<conio.h>

struct student {
		char name[15];
		int rollno;
	};
int main()

{
	int size = 3;
	struct student s[size];
	int counter;
	for (counter =0; counter < size; counter++)
	{
		printf("enter the name and roll number of student %d \n", counter+1);
		scanf("%s %d", &s[counter].name,&s[counter].rollno);
	}
	
	printf("\n \n");
	for (counter =0; counter < size; counter++)
	{
		printf("name: %s \t rollno: %d\n", s[counter].name,s[counter].rollno);
	}
	
	getch();
	return 0;	
}
