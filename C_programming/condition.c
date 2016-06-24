#include<stdio.h>
#include<conio.h>

int main()
{
	int age;
	printf("Ener your age \n");
	scanf("%d", &age);
	if(age <= 30)
	{
		printf("you are new");
	}
	else
	{
		printf("your are old");
	}
	getch();
	return 0; 
	
}
