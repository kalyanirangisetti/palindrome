#include<stdio.h>
#include<conio.h>
viod main()
{
	char a[10], b[10];
	clrscr();
	printf("enter name1: ");
	gets(a);
	strcpy(b,a);
	strrev(a);
	if(strcmp(b,a)==0)
		printf("given string is palindrome");
	else
		printf("given string isnot palindrome");
	getch();
}

