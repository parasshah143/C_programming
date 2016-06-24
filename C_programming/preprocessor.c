#include<stdio.h>
#include<conio.h>

#define LIMIT 10
#define TOP (LIMIT+1)

#define NAME "paras shah"

int main()

{
	int counter;
	
	printf(NAME);
	
	for(counter = 0; counter <=TOP; counter++)
	{
		printf("%d\n",counter);
	}
	getch();
	return 0;
}


