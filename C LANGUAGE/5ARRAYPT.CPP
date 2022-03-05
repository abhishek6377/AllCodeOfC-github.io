#include<stdio.h>
#include<conio.h>
void main()
{
int a[6];
int *ptr;
ptr=&a[0];
clrscr();
for(int i=0;i<6;i++){
printf("The marks of students %d\n",i+1);
scanf("%d",ptr);
ptr++;// there is pointer use address of ptr .
}
for(i=0;i<6;i++)
{
printf("The value of marks %d is:%d\n",i+1,a[i]);
}
getch();
}