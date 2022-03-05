#include<stdio.h>
#include<conio.h>
#include<conio.h>
struct vector{
int x;
int y;
};
void main()
{
struct vector v1,v2;
v1.x=34;
v2.y=78;
clrscr();
printf("The vector 1 %d\n",v1.x);
printf("The vector 2 %d\n",v2.y);
getch();
}