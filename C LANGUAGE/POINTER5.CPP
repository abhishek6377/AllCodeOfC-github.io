// pointer to poniter
#include<stdio.h>
#include<conio.h>
void main()
{
int i=786;
int *j=&i;
int **k=&j;
int ***l=&k;
clrscr();
printf("The value of is %d\n",i);
printf("The address of i is %u\n",&i);
printf("The address of i is %u\n",j);
printf("The value of k is %d\n",**k);
printf("The address of k is %u\n",&k);
printf("The address of j is %u\n",&j);
printf("The address of l is %d\n",***l);
getch();

}