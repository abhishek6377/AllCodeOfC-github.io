#include<stdio.h>
    int main()
	{
//	int max;
	int i,arr[100];
	int s;
	s=arr[0];
	printf("Enter 10 number\n");
	for(i=0;i<4;i++)
	{
		scanf("%d",&arr[i]);
	}
		for(i=0;i<4;i++)
		{
			if(arr[i]<s){
			s=arr[i];
		}
		
	
	   }
	   	printf("The largest number is : %d",s);  
	
	return 0;
}
