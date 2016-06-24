#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
/*	float *p;
	p = (float *)malloc(sizeof(float));
	if(p == NULL)
	{
		puts("failed to allocate momory");
	}
	else
	{
		*p = 20.32;
		printf("%f", *p);
		free(p);
	} */

	char *p;
	int lenght;
	puts("Enter the lenght of the string that you gonna enter");
	scanf("%d", &lenght);
	p = (char *)malloc(sizeof(char)*lenght+1);
	if (p == NULL)
	{
		puts("memory is not available");
	}
	else
	{
		fflush(stdin); // fflush: clear charactor in buffer, stdin: standard input 
		puts("enter the string");
		gets(p);
		puts(p);
		free(p);
	}
	
	getch();
	return 0; 
}

