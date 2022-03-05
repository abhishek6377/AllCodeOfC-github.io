#include<stdio.h>
#include<conio.h>
#include<string.h>
struct employee{
int code;
float salary;
char name[10];
};
void main()
{
struct employee e1,e2,e3;
clrscr();
printf("The employee code is 1:");
scanf("%d",&e1.code);
printf("The employee salary is 1:");
scanf("%f",&e1.salary);
printf("The employee Name is 1:");
scanf("%s",e1.name);
getch();
printf("The employee code is 2:");
scanf("%d",&e2.code);
printf("The employee salary is 2:");
scanf("%f",&e2.salary);
printf("The employee Name is 2:");
scanf("%s",e2.name);
printf("The employee code is 3:");
scanf("%d",&e3.code);
printf("The employee salary is 3:");
scanf("%f",&e3.salary);
printf("The employee Name is 3:");
scanf("%s",e3.name);
getch();
}

