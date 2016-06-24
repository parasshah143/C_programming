#include<stdio.h>
#include<conio.h>

int main()

{
	char source[] = "paras shah";
	char target[25] = "hello world";
	char name[]= {'P','A','R','A','S','\0'};
	char name2= "shah";
	int length;
		
	length = strlen(name);
	printf("the length is %d\n",length);
	

	strcpy(target, source); // string copy
	
	printf("%s \n", source );
	printf("%s \n ", target );
	
	strcat(target, source); // string concatenate
	
	printf("%s \n", source );
	printf("%s \n ", target );
	
	
	getch();
	return 0;	
}
