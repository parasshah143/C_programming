#include<stdio.h>
#include<conio.h>

void add(int , int );

int main()

{
	int num1 = 100;
	int num2 = 200;
	add(num1 , num2);
	getch();
	return 0;	
}


void add (int a, int b)
{
	int result = a + b;
	printf("result of %d and %d is %d", a , b, result);
}
