#include<stdio.h>

main()
{
	char  username[20] = {"user846@gmail.com"};
	char  password[15] = {"User@84678"}; 
	char user[20];
	char pass[15];

	printf("Enter username: ");
	gets(user);

	printf("\nEnter password: ");
	gets(pass);

	if(strcmp(username,user) == 0)
	{
		if(strcmp(password,pass) == 0)
		{
			printf("\nUser successfully logged in...");
		}
		else
		{
			printf("\nPassword entered is invalid");
		}
	}
	else
	{
		printf("\nUsername entered is invalid");
	}


}
