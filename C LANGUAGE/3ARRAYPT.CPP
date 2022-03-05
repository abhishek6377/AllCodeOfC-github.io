#include<stdio.h>
#include<conio.h>
void main()
{
int a=45;
int *ptr=&a;
clrscr();
printf("The value of a %u\n",ptr);
 //The address increase by 2.
ptr++;
ptr++;
//ptr++;
ptr--;

printf("The value of a %u\n",ptr);
getch();
}