#include<stdio.h>
#include<conio.h>    // The other way use to structure and inilializing...
#include<string.h>
struct employee{
int code;
float salary;
char name[10];
};
void main()
{
struct  employee suraj={100,45.65,"suraj"};
printf("Code is: %d\n",suraj.code);
printf("Salary is: %.2f\n",suraj.salary);
printf("Name is: %s\n",suraj.name);
getch();
}
