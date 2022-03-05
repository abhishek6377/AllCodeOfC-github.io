#include<stdio.h>
#include<conio.h>
#include<string.h>
struct employee{
int code;
float salary;
char name[10];
};
int main()
{
struct employee e1;
e1.code=100;
e1.salary=89.90;
strcpy(e1.name,"Abhishek");
clrscr();
printf("The employee code is %d\n",e1.code);
printf("The employee code is %f\n",e1.salary);
printf("The employee code is %s\n",e1.name);
return 0;
}
