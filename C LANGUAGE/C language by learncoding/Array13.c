#include<stdio.h>
int main(){
	int arr[10],i,even=0,odd=0;
	printf("enter the element of array:\n");
	for(i=0;i<5;i++){
			scanf("%d",&arr);
	}
	
     	for(i=0;i<5;i++){
     		arr[0]<arr[i];
     		arr[0]=arr[i];
	
	}
	printf("Even: %d\n",arr[i]);
//	printf("odd: %d",odd);
	return 0;
}
