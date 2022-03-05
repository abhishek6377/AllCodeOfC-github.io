#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
int *ptr;               //#MALLOC PROGRAM
clrscr();
ptr=(int *) malloc(5 * sizeof(int));
for(int i=0;i<5;i++){
printf("Enter the %d value of number is: ",i);
scanf("%d",&ptr[i]);
}
for(i=0;i<5;i++){
printf("The value  %d of number is %d:\n",i,ptr[i]);
}
getch();

}