#include<stdio.h>
#include<conio.h>
void wrong_swap(int a,int b);
void swap(int * a,int *b);
void main()
{
int x=2,y=3;
clrscr();
printf("the value of x and y  swap before %d is %d\n",x,y);
swap(&x,&y);
printf("the value of x and y  after swap %d is %d\n",x,y);
getch();

}
void wrong_swap(int a,int b){
int temp;
a=temp;
a=b;
b=temp;
}
void  swap(int *a,int *b){
int temp;
temp=*a;
*a=*b;
*b=temp;
}
