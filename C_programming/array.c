#include<stdio.h>
#include<conio.h>

int main()

{
	int marks[] = {1,2,3,4,5,6};  // first location starts from zero mean zero to five
	float avg[]= {10.3,20.5};
	char paras[] = "shah";
	char hey[] = {'h','e','l','l','o'};
	
	printf("%d\n", marks[3]);
	printf("%f\n", avg[1]);	
	printf("%s\n", paras);
	printf("%s\n", hey);
	
	getch();
	return 0;	
}
