#include<stdio.h>
#include<conio.h>

int main()
{
	struct Person{ int age; char name[6]; float height;	};
	
	union Student{ int age; char name[6]; float height;	};
	
	printf("%d \n", sizeof(struct Person));
	printf("%d \n", sizeof(union Student));
			
	getch();
	return 0; 
}

