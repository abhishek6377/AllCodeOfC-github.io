#include<stdio.h>
#include<conio.h>
void arrfunction(int *ptr,int n)
{
for(int i=0;i<n;i++){
printf("The value of fuunction %d is %d\n",i+1,*(ptr+i));
}
}


void main()
{
int arr[]={ 2,3,4,5,78,90,89,87};

clrscr();
//printf("The value of arr %d is %d\n",,i+1,arr[i]);
arrfunction(arr,8);
getch();
}
