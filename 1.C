#include<stdio.h>
#include<conio.h>

main()
{
	int a = 10, b = 20;
	char c = 'Ja';
	float pi = 3.14;
	clrscr();

	printf("Int %d and %d : %d\n",a,b,a*b);
	printf("Char : %c\n",c);
	printf("Float : %.2f",pi);

       printf("\\a");

	getch();
}