#include<stdio.h>
#include<conio.h>

struct student {
		char name[15];
		int rollno;
		int age;
	} ;
int main()

{
	//struct student paras = { "paras", 12345, 23	};
	//struct student shah = {"shah", 67890, 25 };
	//struct student hello = {"hello", 11123, 27 };
	//printf("%s", hello.name);
	
	struct student world = {"world", 12345, 14};
	struct student india;
	
	india = world; // copy struct value 
	
	printf("%s \n %s \n",world.name,india.name);	
	printf("%d \n %d \n",world.age,india.age);
	
	getch();
	return 0;	
}
