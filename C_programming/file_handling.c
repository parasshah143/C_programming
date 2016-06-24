#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *Fpointer;
	Fpointer = fopen("paras.txt","w");
	
	if(Fpointer == NULL)
	{
		printf("Unable to create the file");
	}
	else
	{
		printf("file opened successfully");
		fclose(Fpointer);
	}
	
	
	
	getch();
	return 0;

}
