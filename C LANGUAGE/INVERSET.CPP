#include<stdio.h>
#include<conio.h>
void main()
{
int i;
int n;
clrscr();
printf("Enter a number\n\n");
scanf("%d",&n);
for(i=10;i;i--){
printf("%d\n",n*i);
}
getch();
}
