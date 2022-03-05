#include<stdio.h>
int main(){
	int i,arr[5],arr1[5],arr2[5];
	printf("Enter the first array element:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the 2nd array element:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr1[i]);
	}
	for(i=0;i<5;i++)
	{
				printf("\t%d ",arr[i]);
				printf("\t%d\n",arr1[i]);
					
	}
		for(i=0;i<5;i++)
		{
			
			arr2[i]=arr[i]+arr1[i];
			printf("Sum of 2 array element index of %d ",i);
			printf(" %d\n",arr2[i]);
		}

    
     
	return 0;
}
