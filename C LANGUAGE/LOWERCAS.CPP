#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
printf("enter a character\n");
scanf("%c",&ch);
if(ch<=122&&ch>=97){
printf("It is a lowecase\n");
}
else {
printf(" It is a not lowecase\n");

}

getch();
}