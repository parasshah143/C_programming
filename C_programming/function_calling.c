#include<stdio.h>
#include<conio.h>

void function1();
void function2();

int main()

{
	printf("In main function \n");
	printf("In main function 1 \n");
	function1();
	printf("In main function after returing from function1 \n");
	printf("finishing main function \n");

	
	getch();
	return 0;	
}

void function1()
{
	printf("In function 1 \n");
	printf("calling function2 \n");
	function2();
	printf("In function1 after returing from function 2 \n");
	printf("returing from function 1 \n");
}

void function2()
{
	printf("In function 2 \n");
	printf("returing from function 2 \n");
}


