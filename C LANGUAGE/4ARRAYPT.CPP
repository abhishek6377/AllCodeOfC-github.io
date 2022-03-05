#include<stdio.h>
#include<conio.h>
void main()
{
int a[6];
int *ptr;
ptr=&a[6];
clrscr();
for(int i=0;i<6;i++){
printf("The marks of students %d\n",i+1);
scanf("%d",&a[i]);
}
for(i=0;i<6;i++)
{
printf("The value of marks %d is:%d\n",i+1,a[i]);
}
getch();
}