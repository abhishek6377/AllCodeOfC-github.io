//The other way use
#include<stdio.h>//structure....in make a 1000 of employee id.
#include<conio.h>
#include<string.h>
struct employee{
int code;
float salary;
char name[20];
};
void main()
{
//clrscr();  Its not work ...
struct employee facebook[100];
facebook[0].code=101;
facebook[0].salary=78.90;
strcpy(facebook[0].name,"Abhishek");
printf("%d\n",facebook[0].code);
printf("%f\n",facebook[0].salary);
printf("%s\n",facebook[0].name);
facebook[1].code=102;
facebook[1].salary=7999.0;
strcpy(facebook[1].name,"suraj");
printf("%d\n",facebook[1].code);
printf("%f\n",facebook[1].salary);
printf("%s\n",facebook[1].name);
/*facebook[0].code=101;
facebook[0].salary=78.90;
strcpy(facebook[0].name,"Abhishek");
printf("%d\n",facebook[0].code);
printf("%f\n",facebook[0].salary);
printf("%s\n",facebook[0].name);*///[use n term of employee id]
getch();
}