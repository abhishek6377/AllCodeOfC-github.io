#include<stdio.h>
#include<conio.h>
 typedef struct employee{
int code;
float salary;
char name[50];
};
void main()
{
struct employee e1;
struct employee *ptr;
ptr=&e1;  // using the shortcut of printf by replaace in
//typedef
ptr->code=101;
ptr->salary=109.98;
//strcpy(ptr->name,"suraj");
//printf("THe code is %d\n",e1.code);
//printf("THe code is %f\n",e1.salary);
//printf("THe code is %s\n",e1.name);
getch();
}
