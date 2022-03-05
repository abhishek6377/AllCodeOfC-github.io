#include<stdio.h>
#include<conio.h>
void main()
{
int a;
int n;
clrscr();
printf("Enter a table\n");
scanf("%d",&n);
for(int i=1;i<=10;i++){
a=(i)*n;
printf("%dX%d=%d\n",n,i,a);
}
getch();
}