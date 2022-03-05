#include<stdio.h>
#include<conio.h>
void main()
{
int a=0;
int n;
clrscr();
printf("Enter a natural\n");
scanf("%d",&n);
do{
printf(" Natural no.%d\n",a+1);
a++;
}while(a<n);
getch();
}