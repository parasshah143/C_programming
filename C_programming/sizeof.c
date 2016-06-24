#include<stdio.h>
#include<conio.h>

int main()
{
	struct student{ int rollno; char name [13]; } paras;
	
	printf("%d", sizeof (paras));

	getch();
	return 0; 
}
