#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char st1[78]="harry";  //This function is not give a space...
char *st2="hello";
strcat(st1,st2);
clrscr();
printf("The length is st %s",st1);
getch();
}
