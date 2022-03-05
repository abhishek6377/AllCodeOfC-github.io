#include<stdio.h>
#include<conio.h>    // Use to structure and pointer...and arrow operator(->)
#include<string.h>
struct employee{
int code;
float salary;
char name[10];
};
void main()
{
clrscr();
struct  employee e1;
struct employee *ptr;
ptr=&e1;
//(*ptr).code=101;
ptr->code=101;//The shortcut use of pointer is arrow operator....
printf("The code is :%d\n",e1.code);
getch();
}