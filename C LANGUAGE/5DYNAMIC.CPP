#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int *ptr;
ptr=(int *)malloc(6 *sizeof(int));
for(int i=0;i<=4;i++){
printf("Enter the number\n");
scanf("%d",&ptr[i]);
     ///error......
}
for(i=0;i<4;i++){
printf("The :%d number in integer is %d\n",i,ptr[i]);
}
ptr =realloc(ptr,8*sizeof(int));
for(i=0;i<8;i++){
printf("Enter the number\n");
scanf("%d",&ptr[i]);

}
for(i=0;i<8;i++){
printf("The :%d number in integer is %d\n",i,ptr[i]);
}
getch();
}