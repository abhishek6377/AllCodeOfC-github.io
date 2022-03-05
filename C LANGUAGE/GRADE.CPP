#include<stdio.h>
#include<conio.h>
void main()
{
int marks;
clrscr();
printf("enter your marks\n ");
scanf("%d",&marks);
if(marks>=90){
printf("you get A grade\n");
}
else if(marks>=80){
printf("you get B grade\n");
}
else if(marks>=70){
printf("you get C grade\n");
}
else if(marks>=60){
printf("you get D grade\n");
}
else if(marks>=50){
printf("you get E grade\n");
}
else {
printf("You are Fail\n");
}
getch();
}