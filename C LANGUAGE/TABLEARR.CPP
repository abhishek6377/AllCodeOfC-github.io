#include<stdio.h>
#include<conio.h>
void main()
{
int arr[10];
int n;
clrscr();
printf("Enter a table\n");
scanf("%d",&n);
for(int i=0;i<10;i++)
{
arr[i]=n*(i+1);
printf("%dX%d=%d\n",n,i+1,arr[i]);
}
getch();
}