#include<stdio.h>
#include<conio.h>
void main()
{
int arr[10];
int *ptr=&arr[0];
ptr=ptr+3;
clrscr();
if(ptr==&arr[3]){
printf("The value is pointer\n");
}
else{
printf("The value is not pointer\n");
}
getch();
}