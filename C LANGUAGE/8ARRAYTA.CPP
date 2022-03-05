#include<stdio.h>
#include<conio.h>
void main()
{
int mult[3][10];
int n;
clrscr();
for(int i=0;i<10;i++){
mult[0][i]=5*(i+1);
}
for(i=0;i<10;i++){
printf("5X%d=%d\n",i+1,mult[0][i]);
}
printf("************************************\n");
for(i=0;i<10;i++){
mult[1][i]=7*(i+1);
}
for(i=0;i<10;i++){
printf("7X%d=%d\n",i+1,mult[1][i]);
}
for(i=0;i<10;i++){
mult[2][i]=9*(i+1);
}
for(i=0;i<10;i++){
printf("9X%d=%d\n",i+1,mult[2][i]);
}
getch();
}
