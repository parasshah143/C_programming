#include<stdio.h>
#include<conio.h>

int main()

{
	char source[] = "paras shah";
	char target[25] = "hello world";
	
	strcpy(target, source); // string copy
	
	printf("%s \n", source );
	printf("%s \n ", target );
	
	strcat(target, source); // string concatenate
	
	printf("%s \n", source );
	printf("%s \n ", target );
	
	
	getch();
	return 0;	
}
