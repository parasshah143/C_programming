#include<stdio.h>
#include<conio.h>
#include<stdlib.h> //standard library header file

int main()
{
	int *marks, length, counter;
	puts("enter the number of subjects");
	scanf("%d", &length);
	
	marks = (int *)calloc(length, sizeof(int)); 
	// lenght = 5 then 5*4(integer value) = 20 bytes
	// memory will be divided into blocks 
	// 5 blocks and each block is 4byte (size of integer) long; 
	
	if(marks == NULL)
	{
		puts("unable to allocate memory");
	}
	else
	{
		for(counter = 0; counter < length; counter++)
		{
			printf("enter the marks of %d subject \n", counter+1);
			scanf("%d", &marks[counter]);
		}
		for(counter = 0; counter < length; counter++)
		{
			printf(" \n %d \n", marks[counter]);
		}
	}
	free(marks);
		
	getch();
	return 0; 
}

