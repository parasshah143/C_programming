#include<stdio.h>
#include<conio.h>

int main()

{
	int number = 2;
	switch( number )
	{
		case 1: 
			printf("one \n");
			break;
		case 2: 
			printf("tow \n");
			break;
		case 3: 
			printf("three \n");
			break;
		default:
			printf("default\n");
	}
	 
	getch();
	return 0;	
}
