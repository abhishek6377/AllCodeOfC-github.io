#include<stdio.h>
#include<conio.h>
int address(int a){
printf("the address of a is %u\n",&a);
}
void main()
{
int i=9;
clrscr();

printf("the value of i is %d\n",i);
address(i);
printf("the address of i is %u\n",&i);
getch();

}