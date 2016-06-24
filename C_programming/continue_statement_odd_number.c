#include<stdio.h>
#include<conio.h>

int main()

{
	int counter; 
	for(counter =1; counter <=10; counter++)
	{
		if ((counter % 2) != 0) // (== for odd) (!= for even)
		continue;		
		printf("%d\n", counter);
	}
	
	printf("Loop completed \n");
	
	getch();
	return 0;	
}
