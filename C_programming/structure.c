#include<stdio.h>
#include<conio.h>

struct student {
		char name[15];
		int rollno;
		int age;
	};
int main()

{
	struct student paras= {"paras", 12345, 23 };

printf("%s %d %d",paras.name,paras.rollno,paras.age);
	
	getch();
	return 0;	
}
