#include<stdio.h>
int main()
{
	
	int i,j,k,l;

	printf("Enter size of array :\n");
	scanf(" %d ",&i);
	scanf("%d",&j);
		int arr[i],arr1[j],arr2[i];

	printf("Enter array element's :\n");
	for(k=0;k<i;k++)
	{
		scanf("%d",&l);
		arr[k]=l;
	
	}

		for(k=0;k<i;k++)
	{
			scanf("%d",&l);
			arr1[k]=l;
	
		
	}

	for(k=0;k<i;k++)
	{
			arr2[k]=arr[k]+arr1[k];
	printf(" %d ",arr2[k]);
		
	}
	
//	printf("Sum of array elements\n");
	
	
	
	return 0;
}
