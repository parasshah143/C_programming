#include<stdio.h>
#include<conio.h>
#include<stdlib.h> //standard library header file

int main()
{
	char *str;
	str = malloc(13);
	if (str == NULL)
	{
		puts("unable to allocate memory");
	}
	else
	{
		strcpy(str,"paras shah");
		puts(str);
		
		str = (char *)realloc(str,19);
		strcat(str," rocks star");
		puts(str);
		free(str);
	}	
		
	getch();
	return 0; 
}

