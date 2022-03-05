#include<stdio.h>
#include<conio.h>
void display();
int main()
{
int a;
clrscr();
printf("The first lines\n");
display();
printf("The last Lines\n");
getch();
}
void display()
{
printf("The second Lines\n");
}