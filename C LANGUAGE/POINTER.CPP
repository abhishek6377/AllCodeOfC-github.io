#include<stdio.h>
#include<conio.h>
void main()
{
int x=100;
int *y=&x;
clrscr();
printf("The value of x %d\n",x);
printf("The value of x %d\n",*y);
printf("The address of x %u\n",&x);
printf("The address of x %u\n",y);
printf("The address of y %u\n",&y);
printf("The value of y %u\n",*(&y));
printf("The value x in (y) %d\n",*(&x));
getch();
}