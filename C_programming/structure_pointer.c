#include<stdio.h>
#include<conio.h>

struct student {
		char name[15];
		int rollno;
	};
int main()

{
	struct student paras;
	struct student *ptr;
	
	strcpy(paras.name,"paras");
	paras.rollno = 12345;
	
	ptr = &paras;
	
	printf("%s \t %d \n", paras.name,paras.rollno);
	printf("%s \t %d", ptr->name,ptr->rollno);
		
	getch();
	return 0;	
}
