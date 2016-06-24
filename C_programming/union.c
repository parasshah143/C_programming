#include<stdio.h>
#include<conio.h>

int main()
{
	union data{ int x; char c;	}; // union allows to store different data types in the same memory location 
	
	union data var;
	
	printf("%d \n", sizeof (union data));
	
	var.x = 23;
	printf("%d \n", var.x);
	
	var.c = 'p';
	printf("%c", var.c);
		
	getch();
	return 0; 
}
