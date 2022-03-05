#include<stdio.h>
#include<conio.h>    // Use to structure and function...and arrow operator(->)
#include<string.h>
struct employee{
int code;
float salary;
char name[50];
};
void show(struct employee emp){
printf("The code is: %d\n",emp.code);
printf("The salary is: %.2f\n",emp.salary);
printf("The name is: %s\n",emp.name);
}
void main()
{
clrscr();
struct  employee e1;
struct employee *ptr;
ptr=&e1;
ptr->code=101;
ptr->salary=89.675;
strcpy(ptr->name,"suraj");
show(e1);
getch();
}