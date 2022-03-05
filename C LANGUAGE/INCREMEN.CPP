#include<stdio.h>
#include<conio.h>
void main()
{
int a=5;
clrscr();
printf("the value  print after increment= %d \n",a++);
printf("the value print and increment=%d \n",a);
a++;
printf("the value increment and=%d\n",++a);
a+=10;
a++;
printf("The total value print=%d\n",a++);
getch();
}