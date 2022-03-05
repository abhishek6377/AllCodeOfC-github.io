#include<stdio.h>
#include<conio.h>
void main()
{
int a;
int n;
clrscr();
printf("Enter a number\n");
scanf("%d",&n);
for(a=n;a;a--){
printf("enter a number%d\n",a);
if(a==6){
break;
}

}
getch();
}
