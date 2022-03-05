#include<stdio.h>
#include<conio.h>
void main()
{
int physics,maths,chemistry;
clrscr();
printf("Enter a marks ofphysics\n ");
scanf("%f",&physics);
printf("Enter a marks ofmaths\n ");
scanf("%f",&maths);
printf("Enter a marks ofchemistry\n ");
scanf("%f",&chemistry);
total=(physics+maths+chemistry)/3;
if((total<40)|| physcis<33 || chemistry<33 || maths||){
printf(" you are Failed\n ",);
}
else{
peintf(" You are passed");
}
getch();
}