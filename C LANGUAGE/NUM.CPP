#include<stdio.h>
#include<conio.h>
void main()
{
int num;
clrscr();
printf("Enter your number\n ");
scanf("%d",&num);
if(num==1){
printf("Your number is1\n ");
}
else if(num==2){
printf("your number is 2\n");
}
else if(num==3){
printf(" your number is3\n");
}
else{
printf(" its not 1,2 or 3!\n");
}
getch();
}