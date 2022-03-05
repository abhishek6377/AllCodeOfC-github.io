#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
clrscr();
int *ptr;
ptr=(int *)malloc(10*sizeof(int));
for(int i=1;i<=10;i++){
ptr[i]=7*i;
printf("The table is 7X%d=%d\n",i,ptr[i]);
}
ptr=realloc(ptr,15*sizeof(int));
for(i=1;i<=15;i++){
ptr[i]=7*i;
printf("The table is 7X%d=%d\n",i,ptr[i]);
}

getch();
}