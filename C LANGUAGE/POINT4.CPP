#include<stdio.h>
#include<conio.h>
void sumtheavg(int a,int b,int *sum,float *avg){
*sum=a+b;
*avg=(float)*sum*2;
}
void main()
{
int x=5,y=4,sum;
float avg;
clrscr();
sumtheavg(x,y,&sum,&avg);
printf("the sum of two variable is %d\n",sum);

printf("the averge of variable is %f\n",avg);
getch();
}
