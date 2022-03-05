#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
clrscr();
int *ptr;
ptr=(int *) calloc(6, sizeof(int));
/*for(int i=0;i<6;i++){
printf("Enter the %d number :\n",i);
scanf("%d",&ptr[i]);
}*/
for(int i=0;i<6;i++){
printf("The %d number is %d\n",i,ptr[i]);       //Its start for zero
}
getch();
}