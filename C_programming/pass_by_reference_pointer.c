#include<stdio.h>
#include<conio.h>

void display(int *, int *);

int main()

{
	int x,y;
	x=100;
	y=200;
	
	printf("before function call x is %d and y is %d\n", x,y);
	display(&x,&y);
	printf("adter function call x is %d and y is %d\n", x,y);
		
	getch();
	return 0;
}

void display(int *p, int *q)
{
	printf("%d\t %d\n", *p,*q);
	*p = 10;
	*q = 20;	
}


