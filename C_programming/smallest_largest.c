#include<stdio.h>
#include<conio.h>
#include<stdlib.h> //standard library header file

int main()
{
	int length, counter, greatest, smallest;
	
	printf("enter the length of the array \n");
	scanf("%d", &length);
	
	int a[length];
	for (counter = 0; counter < length; counter++)
	{
		printf("enter the %d element for the array \n", counter+1);
		scanf("%d", &a[counter]);
	}
	
	smallest = a[0];
	greatest = a[0];
	
	for(counter =1; counter<length; counter++)
	{
		if( a [counter]> greatest)
		{
			greatest = a[counter];
		}
		if( a [counter] < smallest)
		{
			smallest = a[counter];
		}
	}
	
	printf("greatest is %d and smallest is %d", greatest, smallest);
	
	getch();
	return 0; 
}

