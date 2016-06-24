#include<stdio.h>
#include<conio.h>


int main()

{
	int x = 10;
	// & address of operator 
	// * value of operator (10)
	int *j;
	
	j = &x;
	
	printf("the value of x is %d\n",x);
	printf("the address of x is i.e &x is %p \n", &x);
	// %p is to print the memory address used by host computer 
	printf("the value of x is i.e *(&x) %d \n", *(&x));
	
	printf("the memory stored in the pointer j is %p \n", j);
	printf("the value pointed by the pointer j is %d \n", *j);
	printf("the address of pointer j is %p", &j);
	
	getch();
	return 0;
}
