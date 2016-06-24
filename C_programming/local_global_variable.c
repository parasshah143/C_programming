#include<stdio.h>
#include<conio.h>

void increment();
void display();
int b = 0;   // global variable

int main()

{
	int a = 10;    // local vcriable 
	printf("from main the value of a is %d\n",a);
	display();
	//printf("from main %d\n",b);
	//b++;
	//increment();
	getch();
	return 0;
}

void increment()
{
	printf("from increment %d\n",b);
}
void display()
{
	int a = 20;
	int b = 30;    // local variable
	// first print local variable
	// if local variable is not there then it prints local variable value
	// if local or gobal variable value is not there then it shows error
	printf("from display the value of a is %d\n",a);
	printf("from display b is %d\n",b);
}

