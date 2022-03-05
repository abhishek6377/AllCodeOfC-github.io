#include<stdio.h>
#include<conio.h>
void reverse(int *a,int n){
int temp;
for(int i=0;i<(n/2);i++){
temp=a[i];
a[i]=a[n-i-1];
a[n-i-1]=temp;
}
}
void main()
{
int a[]={ 1,2,3,4,5,6,7};
clrscr();
//printf("%d",a[5]);
reverse(a,7);
for(int i=0;i<7;i++)
printf("The value of is %d and %d\n",i+1,a[i]);
getch();
}