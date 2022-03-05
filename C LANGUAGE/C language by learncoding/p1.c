#include<stdio.h>
int main(){
	int arr[100];
	int max=0,i;
	printf("Enter 10 number\n");
	for(i=0;i<4;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<4;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	printf("The largest number is %d",max);
	return 0;
}
