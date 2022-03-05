#include<stdio.h>
#include<conio.h>
#include<string.h>
typedef struct date{
int date;
int month;
int year;
}date;
void display (date d){
printf("The date is:%d/%d/%d\n",d.date,d.month,d.year);
}
int dateCmp(date d1,date d2){
if(d1.year<d2.year){
printf("Large\n");
}
if(d1.year>d2.year){
printf("Small\n");
}
if(d1.month<d2.month){
printf("Large\n");
}
if(d1.month>d2.month){
printf("samll\n");
}
if(d1.date<d2.date){
printf("Large\n");
}
if(d1.date>d2.date){
printf("Small\n");
}
printf("equal");
}
void main()
{
clrscr();
date d1={4,3,25};
date d2={11,4,21};
display(d1);
display(d2);
int a=dateCmp(d1,d2);
printf("date comparison function returns:%d",a);
getch();
}
