#include<stdio.h>
#include<conio.h>
#define PI 3.14

void main()
{
	int r;
	float area;
	/* const float PI = 3.14; */
	clrscr();
	printf("Enter r:- ");
	scanf("%d",&r);
	area = PI*r*r;
	printf("\n r is: %d",r);
	printf("\n area is:- %.2f",area);
	getch();
}