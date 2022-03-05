#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char st1[23]="hello";
char *st2="harry";
int value=strcmp(st1,st2);
clrscr();
printf("The length is st %d",value);
getch();
}
