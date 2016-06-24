#include<stdio.h>
#include<conio.h>
#include<stdlib.h> //standard library header file
#include<string.h>

int main()
{
	const int maxPasswordLength = 15;
	char password[maxPasswordLength + 1];
	char loginpassword[] = "parasshah";
	char ch;
	int characterPosition = 0;
	printf("Please enter the Password Length 1 - %d \n", maxPasswordLength);
	
	while(1)
	{
		ch = getch();
		//getch() -> it reads one character from keyboard and not showing on screen
		// Ascii value will be stored in ch variable
		if (ch == 13) // ASCII value of enter button
		{
			break;
		}
		else if(ch ==8) // ASCII value of back space key
		{	
			if (characterPosition > 0)
			{
			characterPosition--;
			password[characterPosition] = '\0'; // remove one character entered by user
			printf("\b \b"); // one position left cursor 
			}
		}
		else if (ch == 32 || ch ==9) // ASCII value of space || tab
		{
			continue;
		}
		else
		{
			if (characterPosition < maxPasswordLength)
			{
				password[characterPosition] = ch;
				characterPosition++;
				printf("#");
			}
			else
			{
				printf("\n your Input Exceeds %d you allowed only %d",maxPasswordLength,maxPasswordLength);
				break;
			}
		}
	}
	password[characterPosition] = '\0';
	printf("\n");  // just for output prity 
	if (strlen(password) == 0)
	{
		printf("no password Entered");
	}
	else
	{
		//printf("Password is %s \n", password);
		if(strcmp(password, loginpassword) == 0)
		{
			printf("Login success");
		}
		else
		{
			printf("login failure");
		}
	}

	getch();
	return 0; 
}

