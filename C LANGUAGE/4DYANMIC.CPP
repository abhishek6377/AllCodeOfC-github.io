#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()                    //the calloc make by n term...
{
int *ptr;
int n;
clrscr();
printf("Enter your integer\n");
scanf("%d",&n);
ptr=(int *) calloc(n,sizeof(int));
for(int i=0;i<n;i++){
printf("Enter the number\n");
scanf("%d",&ptr[i]);
}
for(i=0;i<n;i++){
printf("The %d number is %d\n",i,ptr[i]);

}
getch();
}
