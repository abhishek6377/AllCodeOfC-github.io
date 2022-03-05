#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
char  str[]="Abhishek";
char *ptr=str;
while(*ptr!='\0'){
printf("%c",*ptr);
ptr++;
}

getch();
}