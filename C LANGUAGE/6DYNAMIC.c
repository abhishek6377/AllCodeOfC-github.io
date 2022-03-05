#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
clrscr();
int*ptr;
ptr=(int *)calloc(4,sizeof(int));
for(int i=0;i<4;i++){
printf("Enter the number:\n");
scanf("%d",&ptr[i]);
}
for(i=0;i<4;i++){
printf("The %d number of integer :%d\n",i,ptr[i]);
}
ptr=realloc(ptr,10*sizeof(int));
for(i=0;i<10;i++){
printf("Enter the number:\n");
scanf("%d",&ptr[i]);
}
for(i=0;i<10;i++){
printf("The %d number of integer :%d\n",i,ptr[i]);
}
getch();
}
