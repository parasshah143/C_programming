#include<stdio.h>
#include<conio.h>

void display(int mark[], int size)
{
	int counter;
	for (counter =0; counter <size; counter++)
	{
		printf("the array element at %d is %d\n", counter, mark[counter]);
	}
}

int main()

{
	int mark[] = {35,45,55};
	display(mark, 3);
	getch();
	return 0;
}
