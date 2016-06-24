#include<stdio.h>
#include<conio.h>


int main()

{
	int x = 10;
	
	int *p; 
	int **q;  // q is variable (pointer to pointer)
	
	p = &x; // address of variable x
	q= &p;  // q contains address of variable p
	
	printf("x value is %d\n",x); //value
	printf("address of x is %u\n\n", &x); //unsigned number format address
	
	printf("value of p is %u \n", p); // p contains memoery address of x
	printf("address of p is %u \n", &p); // address
	printf("the value pointed by the pointer p is %d\n\n",*p); // integer value
	
	printf("the value of q is %u\n",q); // q contains address of pointer p
	printf("the address of q is %u\n",&q); // address
	printf("value of x by using pointer to pointer that is q is %d \n", **q); //value of varible
	
	getch();
	return 0;
}

