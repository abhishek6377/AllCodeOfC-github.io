#include<stdio.h>
#include<conio.h>
void main()
{
int marks;
clrscr();
printf("enter your marks\n");
scanf("%d",&marks);
if(marks>=90){
printf("Excellent\n");
}
if(marks>70){
printf("very good\n");
}
if(marks>60){
printf("better\n");
}
else{
printf("Aman fail ho gye\n");
}
getch();
}
