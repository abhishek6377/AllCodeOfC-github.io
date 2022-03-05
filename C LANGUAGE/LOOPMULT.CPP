#include<stdio.h>
#include<conio.h>
int main()
{
int i;
int n;
clrscr();
printf("Enter a number\n\n");
scanf("%d",&n);
for(i=1;i<=10;i++){
printf("%d\n",n*i);
}
getch();
}
