#include<stdio.h>
#include<conio.h>
void main()
{
int i=0,sum=0,n;
clrscr();
printf("Enter a number\n");
scanf("%d",&n);
while(i<=n){
sum+=i;
i++;
}
printf("Addition of=%d",sum);
getch();
}